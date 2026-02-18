#include<stdio.h>
int main(){
    int capacity,n,items,sum=0,diff,count=1;
    scanf("%d",&capacity);
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&items);
        sum+=items;
        diff=capacity-sum;
        if(capacity<0)
        count++;
    }
    printf("Remaining Capacity:%d\n",diff);
    printf("overflow days:%d",count);
    return 0;
}