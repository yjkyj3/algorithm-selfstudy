#include<iostream>
using namespace std;
int main(){
    string arr="-WelcomeToSMUPC";
    int a,con;
    cin >> a;
    con=a%14;
    if(con==0){
        cout << "C";
    }
    else{
        cout << arr[con];
    }
    return 0;
}
