//
// Created by 김영준 on 24. 7. 6.
//
#include<bits/stdc++.h>

using namespace std;
int main() {
    stack<char>st;
    stack<char>st2;
    string result;
    string vps;
    while(1) {
        string answer = "YES";
        cin >> vps;
        if(vps=="."){
            break;
        }
        for (int i = 0;i<vps.length(); i++) {
            if (vps[i] == '(') {
                st.push(vps[i]);
            } else if (!st.empty() && vps[i] == ')') {
                st.pop();
            } else if (vps[i] == '[') {
                st2.push(vps[i]);
            } else if (!st2.empty() && vps[i] == ']') {
                st2.pop();
            }
        }
        cout << answer << "\n";
    }
    return 0;

}