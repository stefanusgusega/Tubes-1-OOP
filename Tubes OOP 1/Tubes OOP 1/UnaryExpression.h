#pragma once

#include "Expression.h"

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

template<class T>
class NegativeExpression : public UnaryExpression<T> {
    public:
        NegativeExpression(Expression<T>* x) : UnaryExpression<T>(x) {
            // do nothing
        }

        T solve() {
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
			if (this->x->solve() > 0) {
				return sqrt(this->x->solve());
			}
            else {
				throw "Imaginary Number";
			}
        }
};