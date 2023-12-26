#include<iostream>
using namespace std;
int main(){
    int n,a,b,x,re;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a >> b >> x;
        re=a*(x-1)+b;
        cout << re << endl;
    }
    return 0;
}