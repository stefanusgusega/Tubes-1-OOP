#include "Evaluator.hpp"
using namespace std;
#include <iostream>



int main(int argc, char** args){
    Evaluator<double,double> Ev;
    //setelah compile, run dengan tes, pakai tambahan 1 buah argumen untuk Ekspresi
    string exp;
    float S;
    if (argc > 1){
        exp = args[1];
        cout << "Expression : " << exp << endl;
        try{
            string strong = Ev.convertInfixToPostfix(exp);
            cout << "Postfix converted : " << strong << endl;
            S = Ev.solveExpression(exp);
            cout << "Hasil : " << S << endl;
        }
        catch(BaseError* err){
            cout << err->getMessage() << endl;
        }
    }
    else cout << "Give params for expression to test" << endl; 
    
}