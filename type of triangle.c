#include <stdio.h>
int main() {
    int a1,a2,a3,c;
    scanf("%d %d %d",&a1,&a2,&a3);
    if(a1==a2 && a2==a3 && a3==a1){
        printf("Equilateral triangle");
    }
    else{
        printf("not Equilateral triangle");
    }
    return 0;
}