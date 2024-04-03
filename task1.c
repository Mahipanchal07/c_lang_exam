#include<stdio.h>
main(){
    int r=5,i,j;
    for (i=1;i<=r;i++) 
	{  
    	for (j=1;j<i;j++)
		{
            printf(" ");
        }
        for (j=11-i;j>=6;j--)
		{
            printf("%d",j);
        }
        printf("\n");
    }
}
