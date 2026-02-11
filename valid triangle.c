#include <stdio.h>
int main() {
    int a1,a2,a3,c;
    scanf("%d %d %d",&a1,&a2,&a3);
    c=a1+a2+a3;
    if(c==180){
        printf("valid triangle");
    }
    else{
        printf("not valid triangle");
    }
    return 0;
}