#include <stdio.h>

#define MAX_SIZE 100 // Maximum array size

int main()
{
    int arr[MAX_SIZE], even[MAX_SIZE], odd[MAX_SIZE];
    int size, even_size = 0, odd_size = 0, i;

    // Read size of the array
    printf("Enter size of the array: ");
    scanf("%d", &size);

    // Read elements of array
    printf("Enter elements of the array:\n");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Separate even and odd elements
    for(i=0; i<size; i++)
    {
        if(arr[i] % 2 == 0)
        {
            even[even_size] = arr[i];
            even_size++;
        }
        else
        {
            odd[odd_size] = arr[i];
            odd_size++;
        }
    }

    // Print even elements array
    printf("\nEven elements array: ");
    for(i=0; i<even_size; i++)
    {
        printf("%d ", even[i]);
    }

    // Print odd elements array
    printf("\nOdd elements array: ");
    for(i=0; i<odd_size; i++)
    {
        printf("%d ", odd[i]);
    }

    return 0;
}