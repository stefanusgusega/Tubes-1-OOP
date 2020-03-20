// TESTER UNTUK UNARYEXPRESSION.H

#include "UnaryExpression.h"

int main() {
    NegativeExpression<int>* e = new NegativeExpression<int>(new TerminalExpression<int>(1));
    cout << e->solve() << endl;
    SquareRootExpression<float>* sq = new SquareRootExpression<float>(new TerminalExpression<float>(4.0));
    cout << sq->solve() << endl;
    SquareRootExpression<float>* err = new SquareRootExpression<float>(new TerminalExpression<float>(-1.0));
    try {
        cout << err->solve() << endl;
    }
    catch (const char* err){
        cout << "Akar bilangan negatif tidak diperbolehkan" << endl;
    }
    return 0;
}