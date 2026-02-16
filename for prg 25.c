#include <stdio.h>

int main() {
    int n,rem,sum=0;
    scanf("%d",&n);
    int temp=n;
    for(;n!=0;){
        rem=n%10;
        sum=sum+rem*rem*rem;
        n/=10;
    }
    if(temp==sum)
        printf("Yes");
    else
        printf("No");
        
    return 0;
}