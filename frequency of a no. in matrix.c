#include <stdio.h>

int main() {
    int n,m;
    printf("Enter the no. of rows in the array:");
    scanf("%d",&n);
    printf("Enter the no. of columns in the array:");
    scanf("%d",&m);
    int a[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int item;
    printf("Enter the no. to search:");
    scanf("%d",&item);
    int frq=0;
    for(int g=0;g<n;g++){
        for(int e=0;e<m;e++){
            if(a[g][e]==item){
               frq++; 
            }
        }
    }
    printf("Frequency of %d is:%d\n",item,frq);
    
    return 0;
}
