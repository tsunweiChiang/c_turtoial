#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//13.1 
typedef struct node{
	
} Book;

void readBooksFromFile( ){

}
void printBooks( ){

}
void updateBookInfo( ){

}

void writeBooksToFile( ){

}

//13.2

void getNumber( ){
	
}

void bubbleSortRecursive( ){
	
} 

void swap(){
    
}

int binarySearchRecursive ( ){
   
}


int main() {    
	
	//13.1
	Book array[100] = {0};
    readBooksFromFile();
    int choice;
    while(1){
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
                writeBooksToFile( );
                break;
            case 3:
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
        if (choice == 3){
        	break;
		}
	}
	
	//13.2
	getNumber();
	bubbleSortRecursive();
	int number;
	printf("Enter a number to search: ");
	scanf("%d", &number);
	binarySearchRecursive();
	
    return 0;
}


