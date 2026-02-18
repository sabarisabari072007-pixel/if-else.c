#include<stdio.h>
int main(){
    int n,price,max=0,count=0;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        scanf("%d",&price);
        if(max<price)
        max=price;
        if(price>100)
        count++;
    }
    printf("Highest price:%d\n",max);
    printf("High Price Days:%d",count);
    return 0;
}