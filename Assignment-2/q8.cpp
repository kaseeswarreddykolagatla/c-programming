#include <stdio.h>

#define MAX_SIZE 100 // Maximum array size

int main()
{
    int arr[MAX_SIZE];
    int freq[MAX_SIZE];
    int size, i, j, count;

    // Read size of the array
    printf("Enter size of the array: ");
    scanf("%d", &size);

    // Read elements of array
    printf("Enter elements of the array:\n");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1; // Initialize frequency of each element to -1
    }

    // Count frequency of each element
    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                freq[j] = 0; // Set frequency of the duplicate element to 0
            }
        }

        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }

    // Print frequency of each element
    printf("\nFrequency of each element:\n");
    for(i=0; i<size; i++)
    {
        if(freq[i] != 0)
        {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}