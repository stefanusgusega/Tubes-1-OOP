#include "History.h"

int main() {
    History<float> history;
    int a,b;
    string op;
    int res;
    bool terus = true;
    string mc, terusga, clearga;

    while (terus) {
        cin >> a >> op >> b;
        try {
            if (b == -999) {
                b = history.MR();
            }
            else if (a == -999) {
                a = history.MR();
            }
        }
        catch (const char* err) {
            cout << "Memori kosong" << endl;
            break;
        }
        if (op == "+") {
            AddExpression<int,int>* ae = new AddExpression<int,int>(new TerminalExpression<int>(a), new TerminalExpression<int>(b));
            res = ae->solve();
        }
        else if (op == "-") {
            SubstractExpression<int, int>* se = new SubstractExpression<int, int>(new TerminalExpression<int>(a), new TerminalExpression<int>(b));
            res = se->solve();
        }
        else if (op == "*") {
            MultiplyExpression<float, int>* me = new MultiplyExpression<float, int>(new TerminalExpression<float>(a), new TerminalExpression<int>(b));
            res = me->solve();
        }
        else if (op == "/") {
            DivideExpression<float, int>* de = new DivideExpression<float, int>(new TerminalExpression<float>(a), new TerminalExpression<int>(b));
            res = de->solve();
        }
        cout << "Result: " << res << endl;
        cout << "Clear history? ";
        cin >> clearga;
        if (clearga == "clear") {
            history.clear();
        }
        cout << "MC? ";
        cin >> mc;
        if (mc == "MC") {
            history.MC(res);
        }
        // history.viewQueue();
        cout << "Lagi? ";
        cin >> terusga;
        if (terusga == "no") {
            terus = false;
        }
    }
    
}