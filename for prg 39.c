#include<stdio.h>
int main(){
    int n,rev,sum=0,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&rev);
        sum+=rev;
        if(rev>50000)
        count++;
    }
    printf("Total Revenue:%d\n",sum);
    printf("Total Days:%d",count);
    return 0;
}