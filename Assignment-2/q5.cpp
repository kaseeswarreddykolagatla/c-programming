#include <stdio.h>
#define MAX_SIZE 100 // Maximum array size
int main()
{
    int arr[MAX_SIZE];
    int size, i, j, k;
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
            if(arr[i] == arr[j])
            {
                for(k=j; k<size; k++)
                {
                    arr[k] = arr[k+1];
                }
                size--;
                j--;
            }
        }
    }
    printf("\nArray with duplicates removed: ");
    for(i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}