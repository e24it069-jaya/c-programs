#include <stdio.h>
int main(){
    int month;
    scanf("%d",&month);
    switch (month){
        case 1:
            printf("jan 31 days");
            break;
        case 2:
            printf("Feb 28 or 29 days");
            break;
        case 3:
            printf("Mar 31 days");
            break;
        case 4:
            printf("Apr 30 days");
            break;
        case 5:
            printf("may 31 days");
            break;
        case 6:
            printf("june 30 days");
            break;
        case 7:
            printf("july 31 days");
            break;
        case 8:
            printf("agu 31 days");
            break;
        case 9:
            printf("sep 30 days");
            break;
        case 10:
            printf("Oct 31 days");
            break;
        case 11:
            printf("nov 30 days");
            break;
        case 12:
            printf("dec 31 days");
            break;
        default:
            printf("invalid month enter 1-12 numbers");
    }
    return 0;
}
