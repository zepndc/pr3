/*
  file: list.h
*/
#ifndef LIST_H
#define LIST_H
typedef struct listnode
{
  struct listnode * next;
  int value;
} Node;

Node * List_insert(Node * head, int v);
/* insert a value v to a linked list starting with head, return the
   new head */

Node * List__insert_last(Node * head, int v);
/* insert value v to the end of a linked list, returns the ending node */

Node * List_search(Node * head, int v);
/* search a value in a linked list starting with head, return the node
   whose value is v, or NULL if no such node exists */

Node * List_delete(Node * head, int v);
/* delete the node whose value is v in a linked list starting with
   head, return the head of the remaining list, or NULL if the list is
   empty */

void List_destroy(Node * head);
/* delete every node */

void List_print(Node * head);
/* print the values stored in the linked list */
#endif
