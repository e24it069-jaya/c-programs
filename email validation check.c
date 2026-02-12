#include <stdio.h>
int main() {
    int length;
    scanf("%d",&length);
    if(length>5)
        printf("Valid email");
    else
        printf("Invalid email");
    return 0;
}