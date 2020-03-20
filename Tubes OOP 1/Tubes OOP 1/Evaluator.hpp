using namespace std;
#include <iostream>
#include "Expression.h"
#include "BinaryExpression.h"
#include <stack>
#include "EvaluatorExp.cpp"

template<class T,class U>
class Evaluator{
    private:
        stack<Expression<T>*> st;
    public:
        Evaluator(){

        }

        T solve(string s){
            string s2 = intopost(s);
            cout << s2 << endl;
            int l = s2.length();
            for (int i = 0; i < l-1; i++){
                if (isNumber(s2[i])){
                    cout << "here" << endl;
                    int num = 0;
                    while(isNumber(s2[i])){
                        cout << s2[i]<< endl;
                        num = num * 10 + (int) s2[i] - '0';
                        cout << num << endl;
                        i++;
                    }
                    cout << num << "PUSHED" << endl;
                    st.push(new TerminalExpression<T>(num));
                }
                else if(s2[i] == ' '){ 
                    cout << "found spaces " << s2[i] << endl;
                    continue;
                }
                else{
                    cout<<"there"<<endl;
                    Expression<T>* val2 = st.top();
                    cout << "lol" << val2->solve() << endl;
                    st.pop();
                    cout << st.top()->solve() << endl;
                    // cout << "hi";
                    Expression<T>* val1 = st.top();
                    st.pop();
                    cout << "hi" << endl;
                    cout<<"found" << s2[i] << endl;
                    if (s2[i] == '+'){
                        cout << "+ detected " << endl;
                        // cout << val1+val2 << endl;
                        st.push(new AddExpression<T,U>(val1,val2));
                    }
                    else if (s2[i] == '-'){
                        st.push(new SubstractExpression<T,U>(val1,val2));
                    }
                    else if (s2[i] == '*'){
                        cout << "CUK" << endl;
                        st.push(new MultiplyExpression<T,U>(val1,val2));
                    }
                    else if (s2[i] == '/'){
                        st.push(new DivideExpression<T,U>(val1,val2));
                    }
                    else if (s2[i] == '^'){
                        st.push(new MultiplyExpression<T,U>(val1,new TerminalExpression<T>(pow(val1->solve(),val2->solve()-1))));
                    }
                }
                
            }
            while(st.size() > 1){
                    Expression<T>* val1 = st.top();st.pop();
                    Expression<T>* val2 = st.top();st.pop();
                    st.push(new AddExpression<T,U>(val1,val2));
                    }
            return st.top()->solve();
        }
        
};