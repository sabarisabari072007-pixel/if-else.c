#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    
    int sum=1;
    
    for(;n!=0;n/=10){
        int rem=n%10;
        sum = sum + rem;
    }
    printf("%d",sum);
    return 0;
}