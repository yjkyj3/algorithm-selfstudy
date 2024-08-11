#include <bits/stdc++.h>
using namespace std;
int main(){
    int apple,banana;
    int a,b,c;
    cin >> a >> b>> c;
    apple=a*3+b*2+c*1;
    cin >> a>> b>> c;
    banana=a*3+b*2+c*1;
    if(apple>banana){
        cout <<'A';
    }
    else if(banana>apple){
        cout << 'B';
    }
    else{
        cout << 'T';
    }
    return 0;
}