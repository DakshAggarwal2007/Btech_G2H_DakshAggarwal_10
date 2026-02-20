#include <stdio.h>
#include <math.h>
int main() {
    int i,num;
    int sum=0;
    printf("Enter the nth number:");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++){
        sum+=i;
    }
    printf("The sum upto %d numbers is %d",num,sum);
    return 0;
}
