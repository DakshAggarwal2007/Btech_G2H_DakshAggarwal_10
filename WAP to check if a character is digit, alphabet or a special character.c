#include <stdio.h>

int main() {
    char ch;
    printf("Enter the character;");
    scanf("%c",&ch);
    
    if(ch>='a' && ch<='b' || ch>='A' && ch<='Z'){
        printf("The character is an aplhabet");
    }
    else if (ch>='0' && ch<='9'){
        printf("It is an digit");
    }
    else{
        printf("It is an special character");
    }

    return 0;
}
