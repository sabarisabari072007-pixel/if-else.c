#include<stdio.h>
int main(){
    int n,volts,low=1000,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&volts);
        if(volts<low)
        low=volts;
        if(volts<210)
        count++;
    }
    printf("Minimum Voltage:%d\n",low);
    printf("Low Voltage Events:%d",count);
    return 0;
}