#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, j, freq[100], maxFreq, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);

    for(i = 0; i < len; i++) {
        freq[i] = 1;
        for(j = i+1; j < len; j++) {
            if(str[i] == str[j]) {
                freq[i]++;
            }
        }
    }

    maxFreq = freq[0];
    for(i = 0; i < len; i++) {
        if(freq[i] > maxFreq) {
            maxFreq = freq[i];
        }
    }

    printf("Max repeated character in the string = %c\n", str[i-1]);
    printf("It occurs %d times\n", maxFreq);

    printf("registration number:192211188");
    return 0;
}