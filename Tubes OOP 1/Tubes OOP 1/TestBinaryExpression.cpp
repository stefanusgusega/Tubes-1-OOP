// TESTER UNTUK UNARYEXPRESSION.H

#include "BinaryExpression.h"
#include "ErrorHandling.h"

int main() {
    AddExpression<float, int>* ae = new AddExpression<float, int>(new TerminalExpression<float>(3.4), new TerminalExpression<int>(3));
    cout << ae->solve() << endl;
    ae->BinaryExpression::setX1(new TerminalExpression<float>(3.5));
    cout << ae->solve() << endl;
    SubstractExpression<float, int>* se = new SubstractExpression<float, int>(new TerminalExpression<float>(7.4), new TerminalExpression<int>(3));
    cout << se->solve() << endl;
    MultiplyExpression<float, int>* me = new MultiplyExpression<float, int>(new TerminalExpression<float>(3.2), new TerminalExpression<int>(3));
    cout << me->solve() << endl;
    DivideExpression<float, int>* de = new DivideExpression<float, int>(new TerminalExpression<float>(5.6), new TerminalExpression<int>(8));
    cout << de->solve() << endl;
    DivideExpression<int, int>* eh = new DivideExpression<int, int>(new TerminalExpression<int>(6), new TerminalExpression<int>(0));
    try {
        cout << eh->solve() << endl;
    }
    catch (BaseError* err) {
        cout << err->getMessage() << endl;
    }
    return 0;
}