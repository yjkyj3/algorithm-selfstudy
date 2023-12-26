#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double w,h;
    double m;
    cin >> w >> h;
    m=(w*h)/2;
    cout << setprecision(1) << fixed;
    cout << m;
    return 0;
}
