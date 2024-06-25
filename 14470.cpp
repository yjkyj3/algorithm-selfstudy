#include<iostream>

using namespace std;
int main(){
    int a,b,c,d,e,sum=0,z;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;
    if(a<0){
        for(int i=0;i>a;i--){
            sum+=c;
        }
        sum+=d;
        for(int j=0;j<b;j++){
            sum+=e;
        }
        cout << sum;

    }
    else if(a>=0){
        z=b-a;
        if(z!=0){
        for(int k=0;k<z;k++){
            sum+=e;
        }
        cout << sum;
    }
    }
    return 0;
}