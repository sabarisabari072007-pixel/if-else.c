#include<stdio.h>
int main(){
    int n,errors,sum=0,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&errors);
        sum+=errors;
        if(errors>50)
        count++;
    }
    printf("Total Errors:%d\n",sum);
    printf("Critical Hours:%d",count);
    return 0;
}