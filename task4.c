#include <stdio.h>
void ar(int *arr1, int *arr2, int *sum, int size,int i)
 	{
    for( i=0;i<size;i++) {
        *(sum+i)=*(arr1+i)+*(arr2+i);
    }
int no(int *arr, int size) {
    for( i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}
int main() {
    int size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);
    int arr1[size], arr2[size], sum[size];
    printf("Enter elements of first array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter elements of second array:\n");
    for ( i = 0; i < size; i++) {
        scanf("%d", &arr2[i]);
    }
    ar(arr1, arr2, sum, size);
    printf("Sum of the arrays:\n");
    no(sum, size);

}
