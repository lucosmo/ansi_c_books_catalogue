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
void insertOnCreate(ListBooks* list, Book* data);

#endif
