#include <stdio.h>
#include <math.h>
int main() {
    char a;
    printf("Enter the alphabet:\n");
    scanf("%c",&a);
    if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u' ||
       a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
        printf("It is a vowel");
    else{
        printf("It is a consonent");
    }
    return 0;
}
