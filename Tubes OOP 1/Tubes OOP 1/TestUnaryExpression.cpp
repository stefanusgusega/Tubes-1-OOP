// TESTER UNTUK UNARYEXPRESSION.H

#include "UnaryExpression.h"

int main() {
    NegativeExpression<int>* e = new NegativeExpression<int>(new TerminalExpression<int>(1));
    cout << e->solve() << endl;
    e->setX(new TerminalExpression<int>(7));
    cout << e->solve() << endl;
    SquareRootExpression<float>* sq = new SquareRootExpression<float>(new TerminalExpression<float>(4.0));
    cout << sq->solve() << endl;
    SquareRootExpression<float>* err = new SquareRootExpression<float>(new TerminalExpression<float>(-1.0));
    try {
        cout << err->solve() << endl;
    }
    catch (BaseError* err){
        cout << err->getMessage() << endl;
    }
    return 0;
}