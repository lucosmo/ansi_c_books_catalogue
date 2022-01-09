#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include "book.h"

ListBooks* createList(void) {
    return (ListBooks*)calloc(1, sizeof(ListBooks));
}
