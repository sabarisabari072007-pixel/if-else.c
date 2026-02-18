#include<stdio.h>
int main(){
    int n,units,sum=0,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&units);
        sum+=units;
        if(units>5)
        count++;
    }
    printf("Total units:%d\n",sum);
    printf("spike Hours:%d",count);
    return 0;
}