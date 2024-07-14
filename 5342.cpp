#include<bits/stdc++.h>
using namespace std;
int main(){
    /*double Paper = 57.99;
    double Printer = 120.50;
    double Planners = 31.25;
    double Binders = 22.50;
    double Calendar = 10.95;
    double Notebooks = 11.20;
    double Ink = 66.95;*/
    double sum=0;
    string str;
    while(1){
        cin >> str;
        if(str=="EOI"){
            break;
        }
        else if(str=="Paper"){
            sum += 57.99;
        }
        else if(str=="Printer"){
            sum += 120.50;
        }
        else if(str=="Planners"){
            sum += 31.25;
        }
        else if(str=="Binders"){
            sum += 22.50;
        }
        else if(str=="Calendar"){
            sum += 10.95;
        }
        else if(str=="Notebooks"){
            sum += 11.20;
        }
        else if(str=="Ink"){
            sum += 66.95;
        }
    }
    cout<<'$' << sum << "\n";
    return 0;
}