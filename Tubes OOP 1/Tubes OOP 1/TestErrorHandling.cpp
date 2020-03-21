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
    EmptyQueuePopError* eqp = new EmptyQueuePopError();
    cout << eqp->getMessage() << endl;
    BlankExpressionError* bee = new BlankExpressionError();
    cout << bee->getMessage() << endl;
    try {
        tryError();
    }
    catch (BaseError* err) {
        cout << err->getMessage() << endl;
    }
    catch (int x) {
        cout << "Impossible..." << endl;
    }
    return 0;
}