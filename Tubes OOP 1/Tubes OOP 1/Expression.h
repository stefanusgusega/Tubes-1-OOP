#pragma once

#include <iostream>
#include <cmath>

using namespace std;
// Sebagai base class dari ekspresi
template<class T>
class Expression {
	public:
    	Expression() {}
		//pure virtual, base dari segala expression bisa dibilang interface
    	virtual T solve() = 0;
};
// Ekspresi yang menampung satu nilai saja
template<class T>
class TerminalExpression : public Expression<T> {
	protected:
		T x;
		//base expression yg berupa suatu bilangan
	public:
		TerminalExpression(T x) {
			this->x = x;
		}
		// set nilai TerminalExpression
		void setXTer(T x) {
			this->x = x;
		}
		// mengembalikan nilai terminal expression
		T solve() {
			return this->x;
		}
};