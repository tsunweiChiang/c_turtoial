#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//13.1
typedef struct {
    char title[100];
    char author[100];
    int year;
    int id;
} Book;

Book array[100];
int bookCount = 0;

void readBooksFromFile() {
    FILE *file = fopen("books.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    while (fscanf(file, "%[^,], %[^,], %d, %d\n", array[bookCount].title, array[bookCount].author, &array[bookCount].year, &array[bookCount].id) != EOF) {
        bookCount++;
    }

    fclose(file);
}

void printBooks() {
    for (int i = 0; i < bookCount; i++) {
        printf("Book ID: %d,", array[i].id);
        printf("Title: %s,", array[i].title);
        printf("Author: %s,", array[i].author);
        printf("Year: %d\n", array[i].year);
    }
}

void updateBookInfo() {
    int id, found = 0;
    printf("Enter the ID of the book to update: ");
    scanf("%d", &id);

    for (int i = 0; i < bookCount; i++) {
        if (array[i].id == id) {
            printf("Enter new title: ");
            scanf(" %[^\n]", array[i].title);
            printf("Enter new author: ");
            scanf(" %[^\n]", array[i].author);
            printf("Enter new publication year: ");
            scanf("%d", &array[i].year);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Book not found.\n");
    }
}

void writeBooksToFile() {
    FILE *file = fopen("books.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    for (int i = 0; i < bookCount; i++) {
        fprintf(file, "%s, %s, %d, %d\n", array[i].title, array[i].author, array[i].year, array[i].id);
    }

    fclose(file);
}


int main() {
	//13.1
	printf("13.1\n");
    readBooksFromFile();
    int choice;

    while (1) {
        printf("1. Print all books\n");
        printf("2. Update a book\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printBooks();
                break;
            case 2:
                updateBookInfo();
                writeBooksToFile();
                break;
            case 3:
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }

        if (choice == 3) {
            break;
        }
    }

    return 0;
}



