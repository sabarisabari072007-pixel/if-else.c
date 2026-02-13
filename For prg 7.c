#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int even=0;
    for(int i=0;i<=n;i++){
        if(i%2==0){
            even = even +i;
        }
    }
    printf("%d",even);
    return 0;
}