#include<stdio.h>
int main(){
    char b;
    scanf("%c",&b);
    switch(b){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        printf("vowel");
        break;
    default:
        printf("constants");
        
    }
}
