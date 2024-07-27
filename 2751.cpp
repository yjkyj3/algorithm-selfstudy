#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int arr[1000001];
    cin>> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    for(int j=0;j<n;j++){
        cout << arr[j]<<'\n';
    }
    return 0;
}