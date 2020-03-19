#pragma once

#include <iostream>
#include <cmath>

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

		Expression operator+ (const Expression& E) {
			Expression result(this->x + E.x);
			return result;
		}

		Expression operator- (const Expression& E) {
			Expression result(this->x - E.x);
			return result;
		}

		Expression operator* (const Expression& E) {
			Expression result(this->x * E.x);
			return result;
		}

		Expression operator/ (const Expression& E) {
			Expression result(this->x - E.x);
			return result;
		}

		Expression operator^ (const Expression& E) {
			Expression result(pow(this->x, E.x));
			return result;
		}

		// Kalau tidak penting, bisa dihapus
		Expression akar() {
			Expression result(sqrt(this->x));
			return result;
		}

		// Kalau ga penting bisa dihapus
		Expression negatif() {
			Expression result(this->x * -1);
			return result;
		}

		friend ostream& operator<<(ostream& os, Expression<T> E) {
			os << E.x;
			return os;
		}
};