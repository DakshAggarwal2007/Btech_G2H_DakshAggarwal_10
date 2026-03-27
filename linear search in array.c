#include <stdio.h>

int main() {
    int n,i,j,item,c=0;
    printf("Enter the no. of elements in the array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the element to search:");
    scanf("%d",&item);
    for(j=0;j<n;j++){
        if(a[j]==item){
            printf("Item is found at index %d\n",j);
            c+=1;
        }
    }
    if (c==0){
        printf("Element not found");
    }
    return 0;
}
