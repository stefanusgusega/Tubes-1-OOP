#pragma once

#include <iostream>

using namespace std;
// Kelas basis dari error
class BaseError {
    protected:
        string message;

    public:
        BaseError() {}
        // Mengembalikan pesan error berupa string
        string getMessage() {
            return this->message;
        }
};
// Turunan dari Base Error: Error saat pembagian dengan nol
class DivisionByZeroError : public BaseError {
    public:
        DivisionByZeroError() : BaseError() {
            this->message = "ERROR : Division of numbers with zero is not allowed";
        }
};
// Turunan dari Base Error : Error saat menghitung akar dari suatu nilai yang negatif
class NegativeSquareRootError : public BaseError {
    public:
        NegativeSquareRootError() : BaseError() {
            this->message = "ERROR : Square root of negative numbers is not allowed";
        }
};
// Turunan dari Base Error : Error saat angka mengandung 2 atau lebih point
class DoublePointError : public BaseError {
    public:
        DoublePointError() : BaseError() {
            this->message = "ERROR : Double point in a number is not allowed";
        }
};
// Turunan dari Base Error : Error saat angka mengandung 2 atau lebih minus
class DoubleNegativeError : public BaseError {
    public:
        DoubleNegativeError() : BaseError() {
            this->message = "ERROR : Double minus in a number is not allowed";
        }
};
// Turunan dari Base Error : Error saat memori pada kalkulator kosong, namun tetap mencoba untuk recall
class EmptyQueuePopError : public BaseError {
    public:
        EmptyQueuePopError() : BaseError() {
            this->message = "ERROR : There is no element in the memory";
        }
};
// Turunan dari Base Error : Error saat layar masih kosong, langsung memencet sama dengan
class BlankExpressionError : public BaseError {
    public:
        BlankExpressionError() : BaseError() {
            this->message = "ERROR : There is no Expression to count";
        }
};
// Turunan dari Base Error : Error karena nilai cosinus dari suatu nilai yang dimaksud bernilai nol sehingga tangen tidak terdefinisi
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