#include <stdio.h>

int main() {
    int n,count=0,temp;
    printf("Enter the number:");
    scanf("%d",&n);
    temp=n;
    while(temp != 0){
        temp=temp/10;
        count++;
    }
    printf("No. of digits is: %d\n",count);

    return 0;
}
