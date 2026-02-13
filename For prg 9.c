#include<stdio.h>
int main(){
    long n;
    scanf("%ld",&n);
    
    int count=0;
    
    for(;n!=0;n/=10){
        count++;
    }
    printf("%ld",count);
    
    return 0;
}