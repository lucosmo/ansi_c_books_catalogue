#include <stdio.h>
#include <string.h>
#include "book.h"
#include "list.h"


int main() {
    Book b1 = {1,"title1","name1"};
    Book b2 = {2,"title2","name2"};
    Book b3 = {3,"title3","name3"};
    Book b4 = {4,"title4","name4"};

    ListBooks* list = createList();
    insertOnBeginning(list,&b1);
    insertOnBeginning(list,&b2);
    insertOnBeginning(list,&b3);
    insertOnBeginning(list,&b4);
    display(list);
    freeList(list);

    return 0;
}
