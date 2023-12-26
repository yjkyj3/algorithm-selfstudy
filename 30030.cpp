#include<iostream>
using namespace std;
int main(){
    int price,tax,origin;
    cin >> price;
    tax=price/11;
    origin = price -tax;
    cout << origin;
    return 0;
}
