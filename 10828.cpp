#include<bits/stdc++.h>

using namespace std;

int main() {
    stack<int> stack;
    int n;
    cin >> n;
    string string;
    for (int i = 0; i < n; i++) {
        cin >> string;
        if (string == "push") {
            int value;
            cin >> value;
            stack.push(value);
        } else if (string == "pop") {
            if (!stack.empty()) {
                cout << stack.top()<<"\n";
                stack.pop();
            }
            else{
                cout << "-1"<<"\n";
            }

        }
        else if(string == "size"){
            cout << stack.size() << "\n";

        }
        else if(string=="empty"){
            if(stack.empty()){
                cout << "1"<<"\n";
            }
            else{
                cout << "0"<<"\n";
            }
        }
        else if(string=="top"){
            if(!stack.empty()){
                cout<<stack.top()<<"\n";
            }
            else{
                cout << "-1"<<"\n";
            }
        }
    }
    return 0;
}