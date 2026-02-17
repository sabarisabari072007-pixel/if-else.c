#include<stdio.h>
int main(){
    int sal,ab;
    scanf("%d",&sal);
    scanf("%d",&ab);
    for (int i=0;i<ab;i++){
        sal=sal-100;
    }
    printf("Final salary Rs=%d",sal);
}