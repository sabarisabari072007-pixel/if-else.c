#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    for(int temp=n;temp!=0;temp/=10){
        int rem=temp%10;
        int fact=1;
        for(int i=1;i<=rem;i++){
            fact*=i;
        }
        sum+=fact;
    }
    if(sum==n){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}