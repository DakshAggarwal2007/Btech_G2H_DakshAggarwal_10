#include <stdio.h>

int main() {
    int n,m;
    printf("Enter the no. of elements in the array:");
    scanf("%d",&n);
    int a[n];
    int b[n];
    int c[n];
    printf("Enter the elements of 1st array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the elements of 2nd array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
  
    for(int i=0;i<n;i++){
        c[i]=a[i]+b[i];
    }
    printf("The third array is:\n");
    for(int i=0;i<n;i++){
        printf("%d",c[i]);
    }
    return 0;
}
          
