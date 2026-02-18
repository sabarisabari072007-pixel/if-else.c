#include<stdio.h>
int main(){
    int n,heart,count=0;
    float max=1.0/0.0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&heart);
        if(max<heart)
        max=heart;
        if(heart>140)
        count++;
    }
    printf("Max Heart Readings:%d\n",max);
    printf("Danger Readings:%d",count);
    return 0;
}