#include<stdio.h>
int main(){
    int n,marks,sum=0,count=0,avg;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&marks);
        sum+=marks;
        if(marks<40)
        count++;
    }
    avg=sum/n;
    printf("Average score:%d\n",avg);
    printf("Failed subjects:%d",count);
    return 0;
}