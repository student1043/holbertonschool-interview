#ifndef BINARY_TREES
#define BINARY_TREES

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
int n;
struct binary_tree_s *parent;
struct binary_tree_s *left;
struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

typedef struct binary_tree_s avl_t;

avl_t *sorted_array_to_avl(int *array, size_t size);

avl_t *Method(int *array, int start, int end, avl_t *parent);

void binary_tree_print(const binary_tree_t *);

#endif
