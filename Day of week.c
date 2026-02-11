#include <stdio.h>
int main(){
    int Day;
    scanf("%d",&Day);
    switch (Day){
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("thursday");
            break;
        case 5:
            printf("friday");
            break;
        case 6:
            printf("saturday");
            break;
        case 7:
            printf("sunday");
            break;
        default:
            printf("invalid day enter 0-7 numbers");
        
    }
    return 0;
}
