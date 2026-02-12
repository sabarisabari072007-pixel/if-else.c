#include <stdio.h>

int main() {
    int x;
    scanf("%d",&x);
    if(x>=10 && x<=20){
       printf("Number is within range");
    }
    else{
        printf("Number is not within range");
    }

    return 0;
}
