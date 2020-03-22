#include "Evaluator.hpp"
using namespace std;
#include <iostream>



int main(int argc, char** args){
    Evaluator<double,double> Ev;
    string exp = args[1];
    float S = Ev.solveExpression(exp);
    cout << S << endl;
}