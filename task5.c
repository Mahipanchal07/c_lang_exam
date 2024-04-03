#include<stdio.h>
struct Mobile{
    char company_name[20];
    char color[20];
    char model[20];
    float price;
};

int main(){
    int n,i;   
    
    printf("enter the number of mobile:");
    scanf("%d",&n);
    
    struct Mobile mobiles[n];
    for (i=0;i<n;i++)
	{
        printf("Enter detail of mobile %d:",i+1);
        printf("Company Name:");
        scanf("%s", mobiles[i].company_name);
        printf("Color:");
        scanf("%s",mobiles[i].color);
        printf("Model:");
        scanf("%s", mobiles[i].model);
        printf("Price:");
        scanf("%f", &mobiles[i].price);
	}
}
