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

  if(list->head == NULL){
    list->head = new;
  //  printf("list is empty\n");
  }
  else {
    current = list->head;
    //printf("list is not empty\ngoing through all list:\n\n");
    while(current->next != NULL) {
      current = current->next;
      //printf("while loop current: %s\n",(current->data)->title );
    }
    current->next = new;
    printf("new node added at the end list: %s\n", (current->data)->title);
  }
}

void display(ListBooks* list) {
  //ListNode* current = (ListNode*)malloc(sizeof(ListNode));
  ListNode* current;
if(list->head == NULL){

    printf("list is empty\n");
  }else{
//printf("\nHead: %p\n", list->head);
  current = list->head;
  while(current != NULL) {
    printf("- current %p, value is %s, - next %p\n", current, (current->data)->title, current->next);
    current = current->next;
  }}
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
