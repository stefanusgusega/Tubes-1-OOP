#pragma once

#include "Expression.h"
#include "ErrorHandling.h"
// Mengimplementasikan ekspresi biner, yaitu ekspresi yang melibatkan dua angka
template<class T, class U>
class BinaryExpression : public Expression<T> {
	protected:
		Expression<T>* x1;
		Expression<U>* x2;

	public:
		BinaryExpression(Expression<T>* x1, Expression<U>* x2) {
			this->x1 = x1;	//Ekspresi dasar untuk operasi 2 operand, dimana tiap ekspresi biner mengoperasikan 2 operand bertipe ekspresi lain
			this->x2 = x2;
		}

		void setX1(Expression<T>* x1) {
			this->x1 = x1;
		}

		void setX2(Expression<T>* x2) {
			this->x2 = x2;
		}

		virtual T solve() = 0;
};
// Penjumlahan antara dua ekspresi
template<class T, class U>
class AddExpression : public BinaryExpression<T, U> {
	public:
		AddExpression(Expression<T>* x1, Expression<U>* x2) : BinaryExpression<T, U>(x1, x2) {
			// do nothing
		}

		T solve() {			// Solve ekspresi tambah
			return this->x1->solve() + this->x2->solve();
		}
};
// Pengurangan antara dua ekspresi
template<class T, class U>
class SubstractExpression : public BinaryExpression<T, U> {
	public:
		SubstractExpression(Expression<T>* x1, Expression<U>* x2) : BinaryExpression<T, U>(x1, x2) {
			// do nothing
		}

		T solve() {		// Solve ekspresi kurang
			return this->x1->solve() - this->x2->solve();
		}
};
// Perkalian antara dua ekspresi
template<class T, class U>
class MultiplyExpression : public BinaryExpression<T, U> {
	public:
		MultiplyExpression(Expression<T>* x1, Expression<U>* x2) : BinaryExpression<T, U>(x1, x2) {
			// do nothing
		}

		T solve() {	//Solve ekspresi kali
			return this->x1->solve() * this->x2->solve();
		}
};
// Pembagian antara dua ekspresi
template<class T, class U>
class DivideExpression : public BinaryExpression<T, U> {
	public:
		DivideExpression(Expression<T>* x1, Expression<U>* x2) : BinaryExpression<T, U>(x1, x2) {
			// do nothing
		}

		T solve() {	// Solve ekspresi pembagian, jika bentuknya dibagi dengan 0, maka akan keluar error
			if (this->x2->solve() == 0) {	//pembagian dengan 0 = error
				throw new DivisionByZeroError();
			}
			else {
				return this->x1->solve() / this->x2->solve();
			}
		}
};