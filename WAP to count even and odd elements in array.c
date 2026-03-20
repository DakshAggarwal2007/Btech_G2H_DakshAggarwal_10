int main() {
    int n,i,j;
    printf("Enter the no. of elements in the array:");
    scanf("%d",&n);
    int a[n];
    int count1=0,count2=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++){
        if (a[j]%2==0){
            count1+=1;
        }
        else{
            count2+=1;
        }
    }
    printf("Total no. of even element are: %d\n",count1);
    printf("Total no. of odd element are: %d",count2);
    return 0;
}