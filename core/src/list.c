#include <stdio.h>
#include <stdlib.h>
#include "list.h"
#include "book.h"

ListBooks* createList(void) {
  return (ListBooks*)malloc(sizeof(ListBooks));
}

void insertOnBeginning(ListBooks* list, Book* data) {
  ListNode* new = (ListNode*)malloc(sizeof(ListNode));
  new->data = data;
  if(list->head == NULL)
    list->head = new;
  else {
    new->next = list->head;
    list->head = new;
  }
}

void display(ListBooks*) {
  ListNode* current = (ListNode*)malloc(sizeof(ListNode));
  printf("Head: %p\n", list->head);
  current = list->head;
  while(current != NULL) {
    printf("current %p, next %p", current, current->next);
    current = current->next;
  }
}
