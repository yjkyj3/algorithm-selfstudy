//
// Created by 김영준 on 24. 12. 29.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr,arr+3);
    cout << arr[1];
}