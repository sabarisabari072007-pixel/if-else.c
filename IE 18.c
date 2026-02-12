#include <stdio.h>

int main() {
    int x,y,z;
    scanf("%d",&x);
    if(x>=0 && x<=100){
        y=x*3;
       printf("Bill amount = Rs.%d",y);
    }
    else if(x>=101 && x<=500 ){
        z=x*5;
        printf("Bill amount =Rs.%d",z);
    }

    return 0;
}
