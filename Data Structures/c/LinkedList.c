#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int value;
  struct Node *next;
} Node;

Node createNode(int value) {
  // "node" points to a memory address big enough to fit a Node struct
  // we are declaring a pointer to a new Node struct.
  Node *node = (Node *) malloc(sizeof(Node));

  // first we get the 'value' member from the struct that 'node' points to,
  // then we assign a value to the 'value' member.
  node->value = value;

  // first we get the 'value' member from the struct that 'node' points to,
  // then we assign a value to the 'value' member
  node->next = NULL;

  // return the Node struct that "node" points to
  return *node;
}

// note
// foo->bar is equivalent to (*foo).bar
// i.e. it gets the member called bar from the struct that foo points to.

// note
// '*' can be used as the multiplication operator: 3 * 3
// '*' can declare a pointer: int *x;
// '*' can dereference a pointer: return *x;
int main() {
  Node n1 = createNode(4);
  Node n2 = {7, NULL};

  // this is essentially what createNode is doing
  Node *pn3 = (Node *) malloc(sizeof(Node));
  pn3->value = 9;
  pn3->next = NULL;
  Node n3 = *pn3;

  printf("Value: %d, Next: %s\n", n1.value, n1.next);
  printf("Value: %d, Next: %s\n", n2.value, n2.next);
  printf("Value: %d, Next: %s\n", n3.value, n3.next);

  return 0;
}