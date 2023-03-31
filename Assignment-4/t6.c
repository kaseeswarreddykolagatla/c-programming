#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

struct book {
    char title[50];
    char author[50];
    int year_published;
    int num_pages;
};

struct book library[MAX_BOOKS];
int num_books = 0;

void add_book() {
    if (num_books < MAX_BOOKS) {
        struct book new_book;
        printf("Enter book title: ");
        scanf("%s", new_book.title);
        printf("Enter book author: ");
        scanf("%s", new_book.author);
        printf("Enter year published: ");
        scanf("%d", &new_book.year_published);
        printf("Enter number of pages: ");
        scanf("%d", &new_book.num_pages);
        library[num_books] = new_book;
        num_books++;
        printf("Book added successfully.\n");
    } else {
        printf("Library is full. Cannot add more books.\n");
    }
}

void display_books() {
    if (num_books == 0) {
        printf("Library is empty.\n");
    } else {
        printf("Library contains the following books:\n");
        for (int i = 0; i < num_books; i++) {
            printf("%s by %s, published in %d with %d pages.\n", library[i].title, library[i].author, library[i].year_published, library[i].num_pages);
        }
    }
}

void list_author_books() {
    char author[50];
    int found_books = 0;
    printf("Enter author name: ");
    scanf("%s", author);
    for (int i = 0; i < num_books; i++) {
        if (strcmp(author, library[i].author) == 0) {
            printf("%s by %s, published in %d with %d pages.\n", library[i].title, library[i].author, library[i].year_published, library[i].num_pages);
            found_books++;
        }
    }
    if (found_books == 0) {
        printf("No books found for author %s.\n", author);
    }
}

void count_books() {
    printf("Number of books in the library: %d\n", num_books);
}

int main() {
    int choice;
    do {
        printf("\nLibrary Management System\n");
        printf("1. Add book details\n");
        printf("2. Display book details\n");
        printf("3. List all books of given author\n");
        printf("4. List the count of books in the library\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                add_book();
                break;
            case 2:
                display_books();
                break;
            case 3:
                list_author_books();
                break;
            case 4:
                count_books();
                break;
            case 5:
                printf("Exiting Library Management System. Thank you for using!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 5);
     printf("\nregistration number:192211216");
    return 0;
}
