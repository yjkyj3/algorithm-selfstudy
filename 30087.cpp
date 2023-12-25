#include<iostream>
using namespace std;
int main(void){
    int a;
    string arr;
    cin >>a;
    for(int i=0;i<a;i++){
        cin >> arr;
        if(arr=="Algorithm"){
            cout << "204"<<endl;
        }
        else if(arr=="DataAnalysis"){
            cout << "207"<<endl;
        }
        else if(arr=="ArtificialIntelligence"){
            cout << "302\n";
        }
        else if(arr=="CyberSecurity"){
            cout << "B101\n";
        }
        else if(arr=="Network"){
            cout << "303\n";
        }
        else if(arr=="Startup"){
            cout << "501\n";
        }
        else if(arr=="TestStrategy"){
            cout << "105\n";
        }
    }
}