#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int arr[5];
    int count = 0;
    cin >> n;
    for(int i=0;i<5;i++){
        cin >>arr[i];
    }
    for(int j=0;j<5;j++){
        if(arr[j]==n){
            count++;
        }
    }
    cout << count;