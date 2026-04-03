#include <stdio.h>
#include <math.h>
int main() {
    int n,sum=0,i=0;
    printf("Enter the number:");
    scanf("%d", &n);
    int temp=n;
    while(temp!=0){
        int digit=temp%10;
        sum+=digit*pow(2,i);
        i++;
        temp=temp/10;
    }
    printf("The number in decimal form:%d",sum);
    return 0;
}
