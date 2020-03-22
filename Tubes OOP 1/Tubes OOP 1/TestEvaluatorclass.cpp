#include "Evaluator.hpp"
using namespace std;
#include <iostream>



int main(int argc, char** args){
    try {
        Evaluator<double,double> Ev;
    // string exp = args[2];
    // float S = Ev.solveExpression(exp);
    // cout << S << endl;
        string exp = "2+----4";
        float S = Ev.solveExpression(exp);
        cout << S << endl;
    }
    catch (BaseError* err){
        cout << err->getMessage() << endl;
    }
}