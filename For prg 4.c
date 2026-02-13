#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int sum;
    scanf("%d",&sum);
    for(int i=1;i<=n;i++){
        printf("%d ",i*sum);
        }
    return 0;
}