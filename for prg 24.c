#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
     int temp=n;
    int rev=0,rem;
    for(;n!=0;){
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    if(temp==rev){
        printf("palindrome");
    }
    else{
        printf("Not palindrome");
    }
}