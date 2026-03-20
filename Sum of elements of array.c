#include <stdio.h>

int main() {
    int n,i,j,count=0;
    printf("Enter the no. of elements in the array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++){
        count=count+a[j];
    }
    printf("sum of emelemts is: %d",count);
    return 0;
}