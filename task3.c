#include<stdio.h>
int divi(int n)
 {
    return(n%3==0)&&(n%5==0);
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(divi(n))
	 {
        printf("%d is divisible by 3 and 5", n);
    } 
	else 
	{
        printf("%d is not divisible by 3 and 5", n);
    }

}
