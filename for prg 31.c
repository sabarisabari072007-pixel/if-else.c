#include<stdio.h>
int main(){
    int n,p,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&p);
        sum+=p;
    }
    printf("Total collection:Rs.%d",sum);
    return 0;
}