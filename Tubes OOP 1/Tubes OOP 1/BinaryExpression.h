#pragma once

#include "Expression.h"
#include <iostream>
#include <cmath>

using namespace std;

template<class T, class U>
class BinaryExpression : public Expression<T> {
	protected:
		Expression<T> x1;
		Expression<U> x2;

	public:
		BinaryExpression(Expression<T>* x1, Expression<U>* x2) : Expression<T>(&x1.getX(x1)), Expression<U>(&x2.getX(x2)) {
			this->x1 = &x1;
			this->x2 = &x2;
		}

		Expression<T>* getX1() const {
			return this->x1;
		}

		Expression<U>* getX2() const {
			return this->x2;
		}

		void setX1(Expression<T>* x1) {
			this->x1 = x1;
		}

		void setX2(Expression<U>* x2) {
			this->x2 = x2;
		}

		Expression<T> solve(string op) {
			Expression<T> result;
			switch (op) {
				case ("+"):
					result = this->x1 + this->x2;
					break;
				case ("-"):
					result = this->x1 - this->x2;
					break;
				case ("x"):
					result = this->x1 * this->x2;
					break;
				case ("/"):
					if (this->x2 != 0) {
						result = this->x1 / this->x2;
					}
					else {
						throw -999; // GANTI DENGAN EXCEPTION
					}
					break;
				case ("^"):
					result = this->x1^this->x2;
					break;
				default:
					throw "Invalid operator";
			}
			return result;
		}
};