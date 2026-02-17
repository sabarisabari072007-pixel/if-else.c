#include<stdio.h>
int main(){
    int sum=0,unit,bill;
    scanf("%d",&bill);
    for(int i=0;i<bill;i++){
        scanf("%d",&unit);
        sum+=unit;
    }
    printf("Total units=%d",sum);
}