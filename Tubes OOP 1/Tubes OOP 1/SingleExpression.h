#pragma once

#include "Expression.h"
#include <iostream>
#include <cmath>

using namespace std;

template<class T>
class SingleExpression : public Expression {
	Expression xs;

	public Expression(Expression* xs) {
		this->xs = xs;
	}

	Expression* getXs() const {
		return this->xs;
	}

	void setXs(Expression* xs) {
		this->xs = xs;
	}

	Expression<T> solve(string op) {
		Expression<T> result;
		switch (op) {
			case ("sqrt") :
				result = this->xs.akar();
				break;
			case ("-"):
				result = this->xs.negatif();
				break;
			default:
				throw "Invalid operator";
				break;
		}
		return result;
	}
};