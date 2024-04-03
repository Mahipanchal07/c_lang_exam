#include <stdio.h>
 main(){
    int n, fd, ld, sum;
    
    printf("Enter the number: ");
    scanf("%d", &n);
    
    ld = n % 10;
    fd = n / 100;
    sum = fd + ld;
    
    printf("sum of first and last digit:%d",sum);
}
