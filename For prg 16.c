#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);

    int sum = 0;

    for(int i = 1; i < a; i++){
        if(a % i == 0){
            sum = sum + i;
        }
    }
    if(sum==a){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}
