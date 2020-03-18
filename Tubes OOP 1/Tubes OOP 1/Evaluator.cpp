#include <stack>
#include <string>
#include <iostream>
#include <math.h>
using namespace std;

int prio(char c){
    if (c=='^') return 3;
    else if (c == '*' || c == '/') return 2;
    else if(c == '+' || c == '-') return 1;
    else return -1;
}

int prio(string c){
    if (c=="^") return 3;
    else if (c == "*" || c == "/") return 2;
    else if(c == "+" || c == "-") return 1;
    else return -1;
}



bool isNumber(char c){
    return (c == '0' || c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c =='8' || c == '9');
}



string intopost(string s){
    stack<string> st;
    st.push("N");
    int l = s.length();
    string res = "";
    string ns = "";
    for(int i = 0; i <= l; i++) { 
        if ((isNumber(s[i]))) {
            ns += s[i];
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
    // cout << res << endl;
    return res;
}

int evaluate(string s){
    string s2 = intopost(s);
    int l = s2.length();
    stack<int> a;
    for (int i = 0; i < l-1; i++){
        if (isNumber(s2[i])){
            // cout << "here" << endl;
            int num = 0;
            while(isNumber(s2[i])){
                // cout << s2[i]<< endl;
                num = num * 10 + (int) s2[i] - '0';
                // cout << num << endl;
                i++;
            }
            // cout << num << "PUSHED" << endl;
            a.push(num);
        }
        else if(s2[i] == ' '){ 
            // cout << "found spaces " << s2[i] << endl;
            continue;
        }
        else{
            // cout<<"there"<<endl;
            int val2 = a.top();a.pop();
            int val1 = a.top();a.pop();
            // cout<<"found" << s2[i] << val1 << val2 <<endl;
            if (s2[i] == '+'){
                // cout << "+ detected " << endl;
                // cout << val1+val2 << endl;
                a.push(val1 + val2);
            }
            else if (s2[i] == '-'){
                a.push(val1 - val2);
            }
            else if (s2[i] == '*'){
                a.push(val1 * val2);
            }
            else if (s2[i] == '/'){
                a.push(val1 / val2);
            }
            else if (s2[i] == '^'){
                a.push(pow(val1,val2));
            }
        }
    }
    return a.top();
}
