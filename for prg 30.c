#include<stdio.h>
int main(){
    int n,b_per,bd,sum=0;
    scanf("%d",&b_per);
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&bd);
        sum+=bd;
        bd=b_per-sum;
    }
    printf("Remaining battery:%d",bd);
    return 0;
}