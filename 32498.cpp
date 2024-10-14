#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int cnt=0;
    cin >> n;
    int arr[50];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int j=0;j<n;j++){
        if(arr[j]%2==1){
            cnt+=1;
        }
    }
    cout << cnt;
    return 0;
}