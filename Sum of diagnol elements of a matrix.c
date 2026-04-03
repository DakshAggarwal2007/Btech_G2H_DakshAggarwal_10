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
    int sum=0;
    for(int g=0;g<n;g++){
        for(int e=0;e<m;e++){
            if(g==e){
               sum+=a[g][e]; 
            }
        }
    }
    printf("Sum of Diagnol elements:%d\n",sum);
    
    return 0;
}
