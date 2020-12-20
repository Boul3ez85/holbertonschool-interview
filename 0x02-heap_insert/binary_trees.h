#ifndef BINARYTREE_H
#define BINARYTREE_H


#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
typedef struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
}binary_tree_t;

typedef struct binary_tree_s heap_t;
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
void binary_tree_print(const binary_tree_t *tree);


#endif /* BINARYTREE_H */
