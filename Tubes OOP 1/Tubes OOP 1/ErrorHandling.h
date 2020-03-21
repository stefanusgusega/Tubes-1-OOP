#pragma once

#include <iostream>

using namespace std;

class BaseError {
    protected:
        string message;

    public:
        BaseError() {}

        string getMessage() {
            return this->message;
        }
};

class DivisionByZeroError : public BaseError {
    public:
        DivisionByZeroError() : BaseError() {
            this->message = "ERROR : Division of numbers with zero is not allowed";
        }
};

class NegativeSquareRootError : public BaseError {
    public:
        NegativeSquareRootError() : BaseError() {
            this->message = "ERROR : Square root of negative numbers is not allowed";
        }
};

class DoublePointError : public BaseError {
    public:
        DoublePointError() : BaseError() {
            this->message = "ERROR : Double point in a number is not allowed";
        }
};

class DoubleNegativeError : public BaseError {
    public:
        DoubleNegativeError() : BaseError() {
            this->message = "ERROR : Double minus in a number is not allowed";
        }
};

class EmptyQueuePop : public BaseError {
    public:
        EmptyQueuePop() : BaseError() {
            this->message = "ERROR : There is no element in the queue";
        }
};