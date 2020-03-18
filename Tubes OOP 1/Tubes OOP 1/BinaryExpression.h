#pragma once

#include "Expression.h"
#include <iostream>
#include <cmath>

using namespace std;

template<class T>
class BinaryExpression : public Expression {
	protected:
		Expression x1;
		Expression x2;

	public:

		BinaryExpression(Expression* x1, Expression* x2) {
			this->x1 = x1;
			this->x2 = x2;
		}

		Expression* getX1() const {
			return this->x1;
		}

		Expression* getX2() const {
			return this->x2;
		}

		void setX1(Expression* x1) {
			this->x1 = x1;
		}

		void setX2(Expression* x2) {
			this->x2 = x2;
		}

		T solve(string op) {
			T result;
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
					result = pow(this->x1, this->x2);
					break;
				default:
					throw "Invalid operator";
			}
			return result;
		}
};