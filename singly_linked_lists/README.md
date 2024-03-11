In this this project, we learned about singly linked lists. They are a collection of data called nodes where each node is divided into 2 parts to store data and address at some random addresses.

We also had to create an include guarded header file from the prototypes provided and solve the task questions below.

Please use this data structure for this project:

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;


0. Print list

Write a function that prints all the elements of a list_t list.

    Prototype: size_t print_list(const list_t *h);
    Return: the number of nodes
    Format: see example
    If str is NULL, print [0] (nil)
    You are allowed to use printf

1. List length

Write a function that returns the number of elements in a linked list_t list.

    Prototype: size_t list_len(const list_t *h);

2. Add node

Write a function that adds a new node at the beginning of a list_t list.

    Prototype: list_t *add_node(list_t **head, const char *str);
    Return: the address of the new element, or NULL if it failed
    str needs to be duplicated
    You are allowed to use strdup

3. Add node at the end

Write a function that adds a new node at the end of a list_t list.

    Prototype: list_t *add_node_end(list_t **head, const char *str);
    Return: the address of the new element, or NULL if it failed
    str needs to be duplicated
    You are allowed to use strdup

4. Free list

Write a function that frees a list_t list.

    Prototype: void free_list(list_t *head);

