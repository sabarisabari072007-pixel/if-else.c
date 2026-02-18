#include<stdio.h>
int main(){
    int n,ot,sum=0,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&ot);
        sum+=ot;
        if(ot>3)
        count++;
    }
     ot=sum*200;
    printf("Total Overtime Hours:%d\n",sum);
    printf("Overtime Cost:%d\n",ot);
    printf("Heavy Overtime Days:%d",count);
    return 0;
}