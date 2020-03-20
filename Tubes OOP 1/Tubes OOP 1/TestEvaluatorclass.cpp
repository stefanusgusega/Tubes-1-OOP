#include "Evaluator.hpp"
using namespace std;
#include <iostream>



int main(){
    Evaluator<int,int> Ev;
    string exp = "2+3*4+(8+7)*6-3";
    float S = Ev.solve(exp);
    cout << S << endl;
}