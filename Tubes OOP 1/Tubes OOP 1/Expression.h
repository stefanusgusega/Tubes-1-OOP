#pragma once

#include <iostream>
#include <cmath>

using namespace std;

template<class T>
class Expression {
	public:
    	Expression() {}
    	virtual T solve() = 0;
};

template<class T>
class TerminalExpression : public Expression<T> {
	protected:
		T x;

	public:
		TerminalExpression(T x) {
			this->x = x;
		}

		T solve() {
			return this->x;
		}
};