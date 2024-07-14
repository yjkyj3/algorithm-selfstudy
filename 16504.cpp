#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[30001];
    int n,prize,sum=0;
    cin >> n >> prize;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        sum+=arr[i];

    }
    for(int j=0;j<n;j++){
        cout << prize/sum*arr[j]<<"\n";
    }
    return 0;
}