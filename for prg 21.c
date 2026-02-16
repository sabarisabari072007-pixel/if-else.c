#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int decimal=0,digit,base=1;
    for (;N!=0;N/=10){
        digit=N%10;
        decimal=decimal+digit*base;
        base=base*2;
    }
    printf("%d",decimal);
    return 0;
}