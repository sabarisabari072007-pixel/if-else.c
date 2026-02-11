#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a%400==0 || a%4==0){
        printf("Leap year");
    }
    else{
        printf("Not leap year");
    }
}
