#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "book.h"
#include "list.h"


int main() {

	char* filename = "books";
	FILE* input_file = fopen(filename, "rb+");
    if (!input_file) {
		perror("fopen");
        exit(EXIT_FAILURE);
    }

    Book b1 = {1,"title1","name1"};
    Book b2 = {2,"title2","name2"};
    Book b3 = {3,"title3","name3"};
    Book b4 = {4,"title4","name4"};

    ListBooks* list = createList();
/*
    insertOnBeginning(list,&b1);
    insertOnBeginning(list,&b2);
    insertOnBeginning(list,&b3);
    insertOnBeginning(list,&b4);
*/
/*
		insertAtEnd(list,&b1);
    fwrite(&b1, 1, sizeof(Book), input_file);
    printf("Done Writing!\n");
    insertAtEnd(list,&b2);
    fwrite(&b2, 1, sizeof(Book), input_file);
    printf("Done Writing!\n");
    insertAtEnd(list,&b3);
    fwrite(&b3, 1, sizeof(Book), input_file);
    printf("Done Writing!\n");
    insertAtEnd(list,&b4);
    fwrite(&b4, 1, sizeof(Book), input_file);
    printf("Done Writing!\n");
*/
		Book* buffer;
		if(!input_file) {
			return 1;
		}
		for(int i=0;i<4;i++) {
			fread(&buffer, sizeof(Book), 1, input_file);
			printf("in while\n");
			printf("%s\n",buffer.title);
			insertAtEnd(list,buffer);
		}
    fclose(input_file);
    display(list);

    freeList(list);

    return 0;
}
