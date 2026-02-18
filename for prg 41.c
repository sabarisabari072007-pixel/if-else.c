#include<stdio.h>
int main(){
    int n,cash,amt,sum=0,diff=0,count=0;
    scanf("%d",&amt);
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&cash);
        sum+=cash;
        diff=amt-sum;
        if(diff<5000)
        count++;
    }
    printf("Remaining Cash:%d\n",diff);
    printf("Risk Count:%d",count);
    return 0;
}