#include <iostream>

using namespace std;
int main(){
    int a,x,b,y,t;
    int result1,result2;
    cin >> a>>x>>b>>y>>t;
    if(a>=30){
        result1=21*((t-30)*x)+a;
    }
    else{
        result1=a;
    }
    if(b>=45){
    result2=21*((t-45)*y)+b;}
    else{
        result2=b;
    }
    cout << result1<<endl;
    cout << result2;
    return 0;
}