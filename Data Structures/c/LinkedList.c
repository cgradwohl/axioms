#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int key;
  struct Node *prev;
  struct Node *next;
} Node;

typedef struct LinkedList {
  Node *head;
  Node *tail;
} LinkedList;

Node *createNode(int value) {
  Node *node = (Node *) malloc(sizeof(Node));

  node->key = value;

  node->prev = NULL;
  node->next = NULL;

  return node;
}

LinkedList *createList() {
  LinkedList *list = (LinkedList *) malloc(sizeof(LinkedList));

  list->head = NULL;
  list->tail = NULL;

  return list;
}

LinkedList *insertKey(LinkedList *L, int k) {
  Node *x = createNode(k);

  if (L->head != NULL) {
    L->head->prev = x;
  } else {
    L->tail = x;
  }

  x->next = L->head;
  x->prev = NULL;
  L->head = x;

  return L;
}

Node *searchKey(LinkedList *L, int k) {
  Node *x = L->head;
  
  while (x != NULL && x->key != k) {
    x = x->next;
  }

  return x;
}

LinkedList *deleteKey(LinkedList *L, int k) {
  Node *x = searchKey(L, k);
  if (x == NULL) {
    printf("The key, %d, provided does not exist in the list.\n\n", k);
    return L;
  }

  if (x->prev == NULL) {
    L->head = x->next;
  } else {
    x->prev->next = x->next;
  }

  if (x->next == NULL) {
    L->tail = x->prev;
  } else {
    x->next->prev = x->next;
  }

  return L;
}

int printList(LinkedList *L) {
  Node *x = L->head;

  while (x != NULL) {
    printf("key: %d\n", x->key);

    x = x->next;
  }

  printf("\n\n");
  return 0;
}

void printNode(Node *node) {
  if (!node) {
    printf("Node: NULL\n");
  } else {
    printf("Node: %d\n", node->key);
  }
}

int main() {
  LinkedList *list = createList();

  insertKey(list, 44);
  insertKey(list, 7);
  insertKey(list, 22);

  printList(list);

  deleteKey(list, 22);

  printList(list);

  Node *nodeNine = searchKey(list, 9);
  printNode(nodeNine);

  Node *nodeFortyFour = searchKey(list, 44);
  printNode(nodeFortyFour);

  return 0;
}