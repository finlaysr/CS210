// Create node struct with a data and next field
typedef struct NODE {
  char *value[100];
  struct NODE *next;
} Node;

// Create new node with string value
Node *new_node(char value[100]);
