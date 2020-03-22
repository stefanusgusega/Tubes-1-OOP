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

class EmptyQueuePopError : public BaseError {
    public:
        EmptyQueuePopError() : BaseError() {
            this->message = "ERROR : There is no element in the memory";
        }
};

class BlankExpressionError : public BaseError {
    public:
        BlankExpressionError() : BaseError() {
            this->message = "ERROR : There is no Expression to count";
        }
};

class ZeroCosineNumberError : public BaseError{
    public:
        ZeroCosineNumberError() : BaseError(){
            this->message = "ERROR : Zero cosine value causes undefined tangent";
        }
};

// class UnbalanceBracketException : public BaseError{
//     public:
//         UnbalanceBracketException() : BaseError(){
//             message = "ERROR : UNBALANCED BRACKET DETECTED, PLEASE CORRECT YOUR EXPRESSION\n";
//         }
// };

// class IllegalExpressionMemberException : public BaseError{
//     public:
//         IllegalExpressionMemberException() : BaseError(){
//             message = "ERROR : Illegal character found in the expression\n";
//         }
// };