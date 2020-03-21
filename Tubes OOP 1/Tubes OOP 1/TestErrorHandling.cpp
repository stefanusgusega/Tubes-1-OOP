// TESTER UNTUK ERRORHANDLING.H

#include "ErrorHandling.h"

int main() {
    DivisionByZeroError* dbze = new DivisionByZeroError();
    cout << dbze->getMessage() << endl;
    NegativeSquareRootError* nsqe = new NegativeSquareRootError();
    cout << nsqe->getMessage() << endl;
    DoublePointError* dpe = new DoublePointError();
    cout << dpe->getMessage() << endl;
    DoubleNegativeError* dne = new DoubleNegativeError();
    cout << dne->getMessage() << endl;
    EmptyQueuePop* eqp = new EmptyQueuePop();
    cout << eqp->getMessage() << endl;
    return 0;
}