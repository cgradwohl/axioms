#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int key;
  struct Node *prev;
  struct Node *next;

  int (*print)(struct Node *);
} Node;

typedef struct LinkedList {
  struct Node *head;
  struct Node *tail;

  // here we create a function pointer to emulate a class method
  struct LinkedList (*insert)(struct LinkedList *, int *);
  struct LinkedList (*delete)(struct LinkedList *, int *);
  struct Node (*search)(struct LinkedList *, int *);
  int (*print)(struct LinkedList *);
} LinkedList;

int printNode(Node *node) {
  if (!node) {
    printf("Node: NULL\n");
  } else {
    printf("Node: %d\n", node->key);
  }

  return 0;
}

Node *initializeNode(int value) {
  Node *node = (Node *) malloc(sizeof(Node));

  // fields
  node->key = value;
  node->prev = NULL;
  node->next = NULL;

  // methods
  node->print = printNode;

  return node;
}

LinkedList insertKey(LinkedList *L, int k) {
  Node *x = initializeNode(k);

  if (L->head != NULL) {
    L->head->prev = x;
  } else {
    L->tail = x;
  }

  x->next = L->head;
  x->prev = NULL;
  L->head = x;

  return *L;
}

Node searchKey(LinkedList *L, int k) {
  Node *x = L->head;
  
  while (x != NULL && x->key != k) {
    x = x->next;
  }

  return *x;
}


LinkedList deleteKey(LinkedList *L, int k) {
  Node x = L->search(L, k);
  if (&x == NULL) {
    printf("The key, %d, provided does not exist in the list.\n\n", k);
    return *L;
  }

  if (x.prev == NULL) {
    L->head = x.next;
  } else {
    x.prev->next = x.next;
  }

  if (x.next == NULL) {
    L->tail = x.prev;
  } else {
    x.next->prev = x.next;
  }

  return *L;
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

LinkedList initializeList() {
  LinkedList list = *(LinkedList *) malloc(sizeof(LinkedList));

  // fields
  list.head = NULL;
  list.tail = NULL;

  // methods
  list.insert = insertKey;
  list.delete = deleteKey;
  list.search = searchKey;
  list.print = printList;

  return list;
}


int main() {
  LinkedList list = initializeList();

  list.insert(&list, 44);
  list.insert(&list, 7);
  list.insert(&list, 22);

  // list.print(&list);

  // list.delete(&list, 22);

  // list.print(&list);

  Node nodeNine = searchKey(&list, 9);
  // nodeNine.print(&nodeNine);

  // Node nodeFortyFour = list.search(&list, 44);
  // nodeFortyFour.print(&nodeFortyFour);

  return 0;
}