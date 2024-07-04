#include <bits/stdc++.h>
using namespace std;
void push(int num);
int empty(void);
int pop(void);
int size(void);
int front(void);
int back(void);
int rear=0,f=0;
int queue1[10000];
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string command;
        cin >> command;
        if(command=="push"){
            int num;
            cin >> num;
            push(num);
        }
        else if(command=="pop"){
            cout << pop() << "\n";
        }
        else if(command == "size"){
            cout << size() << "\n";
        }
        else if(command == "empty"){
            cout << empty() << "\n";
        }
        else if(command == "front"){
            cout << front() << "\n";
        }
        else if(command == "back"){
            cout << back() << "\n";
        }
    }
    return 0;
}

int front(void) {
    if (!empty()) {
        return queue1[f];
    }
    else {
        return -1;
    }
}
int back(void){
    if(!empty()){
        return queue1[rear-1];
    }
    else{
        return -1;
    }
}
int size(void){
    return rear-f;
}
int empty(){
    if(rear-f==0){
        return 1;
    }
    else{
        return 0;
    }
}

void push(int num){
    queue1[rear++]=num;
}

int pop(void){
    if(!empty()){
        return queue1[f++];
    }
    else{
        return -1;
    }
}