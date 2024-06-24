#include <iostream>
using namespace std;
int main(){
    char n;
    char array[531441]={0,};
    cin >> n;
    if(n==0){
        cout<<'-';
    }
    else{
        for(int i=0;i<(3^n);i++){
            array[i]='-';
        }
    }
    for(int k=0;k<(3*n);k++){
        cout << array[k];
    }
    cout<<endl;
    return 0;
}
