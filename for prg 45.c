#include<stdio.h>
int main(){
    int n,td,gb,sum=0,diff=0,count=0;
    scanf("%d",&td);
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&gb);
        sum+=gb;
        diff=td-sum;
        if(diff>=0)
        count++;
    }
    
    printf("Remaining Data:%d\n",diff);
    printf("Successful days:%d",count);
    return 0;
}