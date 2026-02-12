#include <stdio.h>
int main() {
    int roll;
    scanf("%d",&roll);
    if(roll==1)
        printf("Admin");
    else if(roll==2)
        printf("User");
    else if(roll==3)
        printf("Guest");
    else
        printf("invalid roll number");
    return 0;
}