#pragma once
template<class T>
class Expression {
	protected:
		T x;

	public:
		Expression(T x) {
			this->x = x;
		}

		T getX(T x) const {
			return this->x;
		}

		void setX() {
			this->x = x;
		}

		virtual T solve(string op) = 0;

};