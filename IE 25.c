#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    switch(a){
        case 1:
        printf("sum=%d",b+c);
        break;
        case 2:
        printf("sum=%d",b-c);
        break;
        case 3:
        printf("sum=%d",b*c);
        break;
        case 4:
        printf("sum=%d",b/c);
        break;
    default:
        printf("Invalid");
    }
    }
