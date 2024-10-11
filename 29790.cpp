#include<bits/stdc++.h>
using namespace std;
int main(){
    int N=0;
    int U=0;
    int L=0;
    cin >> N >> U >> L;
    if(N>=1000&&(U>=8000||L>=260)){
        cout<<"Very Good";
    }
    else if(N>=1000){
        cout<<"Good";

    }
    else{
        cout <<"Bad";
    }
}
