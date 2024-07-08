#include<stdio.h>
int main(void){
    int num=0,a=0,b=0;
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        scanf("%d %d",&a,&b);
        printf("%d",a+b);
    }
    return 0;
}