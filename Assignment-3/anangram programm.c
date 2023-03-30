#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int freq[256] = {0};

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if (strlen(str1) != strlen(str2)) {
        printf("Strings are not anagrams.\n");
        return 0;
 }
    for (int i = 0; str1[i] != '\0'; i++) {
        freq[str1[i]]++;
    }

    for (int i = 0; str2[i] != '\0'; i++) {
        freq[str2[i]]--;
        if (freq[str2[i]] < 0) {
            printf("Strings are not anagrams.\n");
            return 0;
        }
    }

    printf("Strings are anagrams.\n");
    printf("\nregistration number:192211188");
    return 0;
}
