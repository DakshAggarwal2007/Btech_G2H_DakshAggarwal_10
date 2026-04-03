#include <stdio.h>

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        int temp = i;
        int sum = 0;
        while(temp != 0) {
            int digit = temp % 10;
            sum += digit * digit * digit;
            temp = temp / 10;
        }
        if(sum == i) {
            printf("%d ", i);
        }
    }
    return 0;
}
