#include<stdio.h>
int main(){
    int n,units,sum=0,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&units);
        sum+=units;
        if(units>=100)
        count++;
    }
    printf("Total Loss:%d\n",sum);
    printf("High Loss Days:%d",count);
    return 0;
}