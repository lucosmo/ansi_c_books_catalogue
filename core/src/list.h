#ifndef __LIST_STRUCTURE
#define __LIST_STRUCTURE

typedef struct ListNode {
    struct Book* data;
    struct ListNode* next;
    struct ListNode* prev;
} ListNode;

typedef struct {
    ListNode* head;
} ListBooks;

ListBooks* createList(void);
void display(ListBooks*);
void insertOnBeginning(ListBooks* list, Book* data);
void insertAtEnd(ListBooks* list, Book* data);
void freeList(ListBooks*);

#endif
