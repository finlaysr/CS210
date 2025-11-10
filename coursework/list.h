// Create node struct with a data and next field
typedef struct NODE {
  char *value;
  struct NODE *next;
} Node;

typedef Node **List;

// Create new node with string value
Node *new_node(char *value);

void delete_node(Node *node);

void push(List node, char *value);

Node **new_list();
