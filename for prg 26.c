#include<stdio.h>
int main(){
    int sum=0,days,d_exp,count=0;
    scanf("%d",&days);
    for(int i=0;i<days;i++){
        scanf("%d",&d_exp);
        sum+=d_exp;
        if(d_exp>1000)
        count++;
    }
    printf("Total expenses=%d\n",sum);
    printf("Over spend days=%d",count);
    return 0;
}