#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    int val;
    int result=0;
    stack<int> stack;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> val;
        if(val == 0){
            stack.pop();
        }
        else{
            stack.push(val);
        }
    }
    while(!stack.empty()){
        result += stack.top();
        stack.pop();
    }
    cout<<result;

    return 0;
}