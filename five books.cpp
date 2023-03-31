#include <stdio.h>
#include <stdlib.h>

struct book {
    char title[100];
    char author[100];
    float price;
};

int main() {
    struct book library[5];
    int i;

    printf("Enter the details of 5 books:\n");
    for(i = 0; i < 5; i++) {
        printf("\nBook %d:\n", i+1);
        printf("Title: ");
        scanf("%s", library[i].title);
        printf("Author: ");
        scanf("%s", library[i].author);
        printf("Price: ");
        scanf("%f", &library[i].price);
    }

    printf("\nDetails of the 5 books:\n");
    for(i = 0; i < 5; i++) {
        printf("\nBook %d:\n", i+1);
        printf("Title: %s\n", library[i].title);
        printf("Author: %s\n", library[i].author);
        printf("Price: $%.2f\n", library[i].price);
    }

    return 0;
}