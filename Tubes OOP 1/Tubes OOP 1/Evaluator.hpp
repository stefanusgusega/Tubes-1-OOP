using namespace std;
#include <iostream>
#include "Expression.h"
#include "UnaryExpression.h"
#include "BinaryExpression.h"
#include <stack>

int prio(char c);
int prio(string c);
bool isNumber(char c);
string intopost(string s);
bool isUnary(char c);
bool isUnary(string c);
bool isUnary(char c){
    return c == '_' || c =='$' || c=='#' || c=='@' || c=='~';
}
bool isUnary(string c){
    return c == "_" || c =="$" || c=="#" || c=="@" || c=="~";
}

template<class T,class U>
class Evaluator{
    private:
        stack<Expression<T>*> st;
    public:
        Evaluator(){

        }

        T solve(string s){
            string s2;
            try{
                s2 = intopost(s);
            }catch (BaseError* err){
                throw err;
            }

            // cout << s2 << endl;
            int l = s2.length();
            for (int i = 0; i < l-1; i++){
                // cout << s2[i] <<"  " <<endl;
                if (isNumber(s2[i]) || s2[i] == '.'){
                    // cout << "here" << endl;
                    string num = "";
                    while(isNumber(s2[i]) || s2[i] == '.'){
                        // cout << s2[i]<< endl;
                        if (s2[i] == '.' && num.find('.') != -1) throw new DoublePointError();
                        num += s2[i];
                        // cout << num << endl;
                        i++;
                    }
                    i--;
                    cout << num << "PUSHED" << endl;
                    if (num.find('.') != -1) st.push(new TerminalExpression<T>(stod(num)));
                    else st.push(new TerminalExpression<T>((int) stod(num)));
                }
                else if(s2[i] == ' '){ 
                    // cout << "found spaces " << s2[i] << endl;
                    continue;
                }
                else{
                    // cout<<"there"<<endl;
                    if (!isUnary(s2[i])){
                        Expression<T>* val2 = st.top();
                        // cout << "lol" << val2->solve() << endl;
                        st.pop();
                        // cout << st.top()->solve() << endl;
                        // cout << "hi";
                        Expression<T>* val1 = st.top();
                        st.pop();
                        // cout << "hi" << endl;
                        // cout<<"found" << s2[i] << endl;
                        if (s2[i] == '+'){
                            // cout << "+ detected " << endl;
                            // cout << val1+val2 << endl;
                            st.push(new AddExpression<T,U>(val1,val2));
                            // cout << st.top()->solve() << "PUSHED" << endl;
                        }
                        else if (s2[i] == '-'){
                            st.push(new SubstractExpression<T,U>(val1,val2));
                            // cout << st.top()->solve() << "PUSHED" << endl;
                        }
                        else if (s2[i] == '*'){
                            // cout << "CUK" << endl;
                            st.push(new MultiplyExpression<T,U>(val1,val2));
                            // cout << st.top()->solve() << "PUSHED" << endl;
                        }
                        else if (s2[i] == '/'){
                            st.push(new DivideExpression<T,U>(val1,val2));
                            // cout << st.top()->solve() << "PUSHED" << endl;
                        }
                        else if (s2[i] == '^'){
                            st.push(new MultiplyExpression<T,U>(val1,new TerminalExpression<T>(pow(val1->solve(),val2->solve()-1))));
                            // cout << st.top()->solve() << "PUSHED" << endl;
                        }
                    }else{
                        Expression<T>* val1 = st.top();st.pop();
                        if (s2[i] == '_') st.push(new SquareRootExpression<T>(val1));
                        else if (s2[i] == '$') st.push(new SineExpression<T>(val1));
                        else if (s2[i] == '#') st.push(new CosineExpression<T>(val1));
                        else if (s2[i] == '@') st.push(new TangentExpression<T>(val1));
                        else if (s2[i] == '~') st.push(new NegativeExpression<T>(val1));
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

        string intopost(string s){
            if (s == ""){
                throw new BlankExpressionError();
            }
            stack<string> st;
            st.push("N");
            int l = s.length();
            string res = "";
            string ns = "";
            for(int i = 0; i <= l; i++) { 
                if ((isNumber(s[i])) || s[i] == '.') {
                    ns += s[i];
                    continue;
                }
                else if (s[i] == ' '){
                    continue;
                }
                else{
                    if (ns != "") {
                        res += ns;
                        res += " ";
                        ns = "";
                    }
                    if (s[i] == '('){
                        st.push("(");
                    }
                    else if (s [i] == ')'){
                        while(st.top() != "N" && st.top() != "("){
                            string c = st.top();
                            st.pop();
                            res += c;
                            res += " ";
                        }
                        if (st.top() == "("){
                            st.pop();
                        }
                    }
                    else if (s[i] == '-' && (!isNumber(s[i-1]))){
                        st.push("~");
                        if (s[i+1] == '-'){
                            throw new DoubleNegativeError();
                        }
                    }
                    else if (isUnary(s[i])){
                        char c = s[i];
                        string l(1,c);
                        st.push(l);
                    }
                    else{
                        while(st.top() != "N" && prio(s[i]) <= prio(st.top())){
                            string c = st.top();
                            st.pop();
                            res += c;
                            res += " ";
                        }
                        char c = s[i];
                        string l(1,c);
                        st.push(l);
                    }
                }
            }
            while(st.top() != "N"){
                res += st.top();
                st.pop();
            }
            cout << res << endl;
            return res;
        }
        
};

int prio(char c){
    if (c=='^') return 3;
    else if (c == '*' || c == '/') return 2;
    else if(c == '+' || c == '-') return 1;
    else return -1;
}

int prio(string c){
    if (c=="^") return 4;
    else if (isUnary(c)) return 3;
    else if (c == "*" || c == "/") return 2;
    else if(c == "+" || c == "-") return 1;
    else return -1;
}



bool isNumber(char c){
    return (c == '0' || c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c =='8' || c == '9');
}