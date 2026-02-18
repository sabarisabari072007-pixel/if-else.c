#include<stdio.h>
int main(){
    int days,rf,sum=0,count=0;
    scanf("%d",&days);
    for(int i=1;i<=days;i++){
        scanf("%d",&rf);
        sum+=rf;
        if(rf>50)
        count++;
    }
    printf("Total Rainfall:%d\n",sum);
    printf("Heavy Rain Days:%d\n",count);
    return 0;
}