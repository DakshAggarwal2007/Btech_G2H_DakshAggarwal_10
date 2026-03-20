#include <stdio.h>

int main() {
    int n,reversed=0,temp;
    printf("Enter the number:");
    scanf("%d",&n);
    temp=n;
    while(temp != 0){
        int digit=temp%10;
        reversed=reversed*10+digit; 
        temp=temp/10;
    }
    if(n==reversed){
        printf("the number is palindrome");
    }
    else{
        printf("The no.is not an palindrome");
    }

    return 0;
}
