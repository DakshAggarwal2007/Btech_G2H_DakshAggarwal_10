#include <stdio.h>

int main() {
    int n,i;
    float sum=0.0;
    printf("Enter the number of elements in the series:");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        sum += (((float)1.0/i));
    }
    printf("The sum of series is %f",sum);
    return 0;
}
