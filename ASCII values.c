#include <stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if(ch >='A' && ch <='Z' || ch >='a' && ch <= 'z'){
        printf("Alphabet");
    }
    else if(ch<='9'&&ch>='0'){
        printf("Digit");
    }
    else{
        printf("Special character");
    }

    return 0;
}