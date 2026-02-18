#include<stdio.h>
int main(){
    int n,hr,sum=0,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&hr);
        sum+=hr;
        if(hr>50)
        count++;
    }
    printf("Total Risk:%d\n",sum);
    printf("High Risk Sessions:%d",count);
    return 0;
}