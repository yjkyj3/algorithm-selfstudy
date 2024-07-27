#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string in;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> in;
        for(int j=0;j<in.length();j++){
            in[j]=tolower(in[j]);
        }
        cout<<in<<"\n";
    }
    return 0;
}