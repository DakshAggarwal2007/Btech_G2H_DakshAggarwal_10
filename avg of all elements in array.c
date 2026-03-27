#include <stdio.h>

int main() {
    int n,i,j,sum=0;
    float avg;
    printf("Enter the no. of elements in the array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++){
        sum=sum+a[j];
    }
    avg=sum/n;
    printf("avg of emelemts is: %f",avg);
    return 0;
}
