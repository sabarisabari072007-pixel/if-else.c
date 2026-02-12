#include <stdio.h>

int main() {
    printf("1.Addition (+)\n");
    printf("2.Subtraction (-)\n");
    printf("3.Multiplication (*)\n");
    printf("4.Division (/)\n");
    char operation;
    scanf("%c",&operation);
    int a,b;
    scanf("%d %d",&a,&b);
    switch(operation){
        case'+':
        printf("%d+%d=%d",a,b,a+b);
        break;
        case'-':
        printf("%d-%d=%d",a,b,a-b);
        break;
        case'*':
        printf("%d*%d=%d",a,b,a*b);
        break;
        case'/':
        if(b==0){
            printf("Error");
        }
        else{
            printf("%d/%d=%d",a,b,a/b);
        }
        break;
    default:
    
    return 0;
}
}
