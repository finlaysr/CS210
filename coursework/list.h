// Create node struct with a data and next field
typedef struct NODE {
  char *value;
  struct NODE *next;
} Node;

// Create new node with string value
Node *new_node(char *value);

void delete_node(Node *node);
