#include<iostream>
using namespace std;
int factorial(int n){
	long re=1;
	for(int i=1;i<=n;++i){
		re=re*i;
	}
	return re;
}
int main(void){
	long a;
	long re=0;
	cin >>a;
	re=factorial(a);
	cout << re;
	system("pause");
	return 0;
} 
