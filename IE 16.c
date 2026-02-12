
#include <stdio.h>

int main() {
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if(x==y && x==z){
        printf("Equilateral Triangle");
    }
    else if((x==y) || (x==z) || (y==z)){
        printf("Isolances Triangle");
    }
    else if(x!=y!=z){
        printf("Scalene");
    }

    return 0;
}
