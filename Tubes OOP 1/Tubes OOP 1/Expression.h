#pragma once

#include <iostream>
#include <cmath>

using namespace std;

template<class T>
class Expression {
	public:
    	Expression() {}
    	virtual T solve() = 0;
		//pure virtual, base dari segala expression bisa dibilang interface
};

template<class T>
class TerminalExpression : public Expression<T> {
	protected:
		T x;
		//base expression yg berupa suatu bilangan
	public:
		TerminalExpression(T x) {
			this->x = x;
		}

		void setXTer(T x) {
			this->x = x;
		}

		T solve() {
			return this->x;
		}
};