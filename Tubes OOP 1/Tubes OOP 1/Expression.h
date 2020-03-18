#pragma once

#include <iostream>

using namespace std;

template<class T>
class Expression {
	protected:
		T x;

	public:
		Expression(T x) {
			this->x = x;
		}

		T getX() const {
			return this->x;
		}

		void setX(T x) {
			this->x = x;
		}

		T solve(string op) {
			return this->x;
		}

};