#pragma once

#include "Expression.h"
#include "ErrorHandling.h"

template<class T>
class UnaryExpression : public Expression<T> {
protected:
    Expression<T>* x;
            //UnaryExpression adalah base dari ekspresi 1 operand, operand berbentuk ekspresi
public:
    UnaryExpression(Expression<T>* x) {
        this->x = x;
    }

    void setX(Expression<T>* x) {
        this->x = x;
    }

    virtual T solve() = 0;
};

template<class T>
class NegativeExpression : public UnaryExpression<T> {
public:
    NegativeExpression(Expression<T>* x) : UnaryExpression<T>(x) {
        // do nothing
    }

    T solve() {                         //NEGASI
        return -1 * this->x->solve();
    }
};

template<class T>
class SquareRootExpression : public UnaryExpression<T> {
public:
    SquareRootExpression(Expression<T>* x) : UnaryExpression<T>(x) {
        // do nothing
    }

    T solve() {
        if (this->x->solve() >= 0) {
            return sqrt(this->x->solve());
        }                                       //AKAR
        else {
            throw new NegativeSquareRootError();
        }
    }
};

template<class T>
class SineExpression : public UnaryExpression<T> {
public:
    SineExpression(Expression<T>* x) : UnaryExpression<T>(x) {
        // do nothing
    }

    T solve() {
        return sin(this->x->solve()); //EKSPRESI SINUS
    }
};

template<class T>
class CosineExpression : public UnaryExpression<T> {
public:
    CosineExpression(Expression<T>* x) : UnaryExpression<T>(x) {
        // do nothing
    }

    T solve() {
        return cos(this->x->solve()); //EKSPRESI COSINUS
    }
};

template<class T>
class TangentExpression : public UnaryExpression<T> {
public:
    TangentExpression(Expression<T>* x) : UnaryExpression<T>(x) {
        // do nothing
    }

    T solve() {
        if (cos(this->x->solve()) != 0) {
            return tan(this->x->solve());   //EKSPRESI TANGENT
        }
        else {
            throw new ZeroCosineNumberError();  //pembagian nol ilegal
        }
    }
};