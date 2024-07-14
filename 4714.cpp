#include<bits/stdc++.h>
using namespace std;
int main(){
    double a;
    while(1){
        cin >> a;
        if(a<0){
            break;
        }
        else{
            cout<<fixed;
            cout.precision(2);
            cout << "Objects weighing "<<a<<" on Earth will weigh "<<a*0.167<<" on the moon.\n";
        }
    }
    return 0;

}