#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(100<=n && 999>=n)
        printf("three digit number");
    else
        printf("not three digit number");
    return 0;
}
