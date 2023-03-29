#include <stdio.h>

int minJumps(int arr[], int n)
{
    if (n <= 1)
        return 0; 

    int jumps = 1;
    int currEnd = arr[0]; 
    int farthestEnd = arr[0]; 

    for (int i = 1; i < n; i++) {
        if (currEnd < i)
            return -1; 

        farthestEnd = (i + arr[i] > farthestEnd) ? i + arr[i] : farthestEnd;

        if (currEnd == i) {
            currEnd = farthestEnd;
            jumps++;
        }

        if (currEnd >= n-1)
            return jumps; 
    }

    return -1; 
}

int main()
{
    int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    int minJumpsNeeded = minJumps(arr, n);
    if (minJumpsNeeded == -1)
        printf("Cannot reach the end of the array\n");
    else
        printf("Minimum number of jumps needed to reach the end of the array: %d\n", minJumpsNeeded);

    return 0;
}