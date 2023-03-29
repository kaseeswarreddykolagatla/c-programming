#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    int arr[MAX_SIZE];
    int size, i, j, temp;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter elements of the array:\n");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nArray in descending order: ");
    for(i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
     printf("\nRegistration Number:192211216");
    return 0;
}