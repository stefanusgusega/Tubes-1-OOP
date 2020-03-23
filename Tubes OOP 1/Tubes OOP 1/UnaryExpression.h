#pragma once

#include "Expression.h"
#include "ErrorHandling.h"
//UnaryExpression adalah base dari ekspresi 1 operand, operand berbentuk ekspresi
template<class T>
class UnaryExpression : public Expression<T> {
protected:
    Expression<T>* x;
            
public:
    UnaryExpression(Expression<T>* x) {
        this->x = x;
    }

    void setX(Expression<T>* x) {
        this->x = x;
    }

    virtual T solve() = 0;
};
// Turunan dari UnaryExpression : Negasi
template<class T>
class NegativeExpression : public UnaryExpression<T> {
public:
    NegativeExpression(Expression<T>* x) : UnaryExpression<T>(x) {
        // do nothing
    }
    // Solving NEGASI
    T solve() {                         
        return -1 * this->x->solve();
    }
};
// Turunan dari UnaryExpression : Operasi akar kuadrat
template<class T>
class SquareRootExpression : public UnaryExpression<T> {
public:
    SquareRootExpression(Expression<T>* x) : UnaryExpression<T>(x) {
        // do nothing
    }
    // Menyelesaikan operasi akar, jika akar dari negatif, akan mengeluarkan pesan kesalahan
    T solve() {
        if (this->x->solve() >= 0) {
            return sqrt(this->x->solve());
        }                                       //AKAR
        else {
            throw new NegativeSquareRootError();
        }
    }
};
// Turunan dari UnaryExpression : Sinus
template<class T>
class SineExpression : public UnaryExpression<T> {
public:
    SineExpression(Expression<T>* x) : UnaryExpression<T>(x) {
        // do nothing
    }
    //Penyelesaian EKSPRESI SINUS
    T solve() {
        return sin(this->x->solve()); 
    }
};
// Turunan dari UnaryExpression : Cosinus
template<class T>
class CosineExpression : public UnaryExpression<T> {
public:
    CosineExpression(Expression<T>* x) : UnaryExpression<T>(x) {
        // do nothing
    }
    //Penyelesaian EKSPRESI COSINUS
    T solve() {
        return cos(this->x->solve()); 
    }
};
// Turunan dari UnaryExpression : Tangen
template<class T>
class TangentExpression : public UnaryExpression<T> {
public:
    TangentExpression(Expression<T>* x) : UnaryExpression<T>(x) {
        // do nothing
    }
    // Penyelesaian EKSPRESI TANGENT, jika nilai cosinus dari nilai yang dimasukkan bernilai 0, akan keluar pesan kesalahan
    T solve() {
        if (cos(this->x->solve()) != 0) {
            return tan(this->x->solve());   
        }
        else {
            throw new ZeroCosineNumberError();  //pembagian nol ilegal
        }
    }
};