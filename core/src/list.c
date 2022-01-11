#include <stdio.h>
#include <stdlib.h>
#include "book.h"
#include "list.h"


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

void insertAtEnd(ListBooks* list, Book* data) {
  ListNode* new = (ListNode*)malloc(sizeof(ListNode));
  ListNode* current;
  new->data = data;

  if(list->head == NULL)
    list->head = new;
  else {
    current = list->head;
    while(current != NULL) {
      current = current->next;
    }
    current->next = new;
  }
}

void display(ListBooks* list) {
  ListNode* current = (ListNode*)malloc(sizeof(ListNode));
  printf("Head: %p\n", list->head);
  current = list->head;
  while(current != NULL) {
    printf("current %p, next %p", current, current->next);
    current = current->next;
  }
}

void freeList(ListBooks* list) {
  ListNode* current;
  ListNode* next;
  current = list->head;
  while(current != NULL) {
    next = current->next;
    free(current);
    current = next;
  }
  free(list);
}
