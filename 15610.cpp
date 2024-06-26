#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a;
    double b;
    cin >>a;
    double result = sqrt(a);
    b=result*4;
    cout<<fixed;
    cout.precision(6);
    cout << b;
}