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

	T solve(string op) {
		T result;
		switch (op) {
			case ("sqrt") :
				result = sqrt(this->xs);
				break;
			case ("-"):
				result = this->xs * -1;
				break;
			default:
				throw "Invalid operator";
				break;
		}
		return result;
	}
};