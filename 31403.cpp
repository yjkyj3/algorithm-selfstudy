#include <iostream>
#include <string>
using namespace std;
int main(){
    string a,b,c;
    int result1, result2;
    cin>>a;
    cin>>b;
    cin>>c;
    result1= stoi(a)+ stoi(b)- stoi(c);
    result2= stoi(a+b)- stoi(c);
    cout<<result1<<endl<<result2;
}