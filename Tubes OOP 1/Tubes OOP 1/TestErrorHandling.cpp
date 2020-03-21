// TESTER UNTUK ERRORHANDLING.H

#include "ErrorHandling.h"

void tryError() {
    int x = 9;
    int y = 0;
    if (y == 0) {
        throw new DivisionByZeroError();
    }
    else {
        throw 100;
    }
}

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
    try {
        tryError();
    }
    catch (BaseError* err) {
        cout << err->getMessage() << endl;
    }
    return 0;
}