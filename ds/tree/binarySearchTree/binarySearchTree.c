/*
 * =============================================================================
 *
 *       Filename:  binarySearchTree.c
 *
 *    Description:  Binary Search Tree
 *
 *        Version:  1.0
 *        Created:  08/28/2010 12:05:29 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Richard Ma (richard_ma), richard.ma.19850509@gmail.com
 *        Company:  Feng Huli Primary School
 *
 * =============================================================================
 */

#include	<stdlib.h>
#include	<stdio.h>
#include	<malloc.h>

#define     MAX_SIZE    100
#define     __DEBUG__   1

typedef struct bin_st_node {
    int val;                        /* value */
    struct bin_st_node *parent;     /* parent pointer */
    struct bin_st_node *left;       /* left child pointer */
    struct bin_st_node *right;      /* right child pointer */
} BinstNode, *BinstNodePtr;
typedef BinstNodePtr BinstTree;

#ifdef __DEBUG__

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  debug_node
 *  Description:  
 * =============================================================================
 */
    void
debug_node (BinstNodePtr node)
{
    if (NULL != node) {
        printf("%10p[v:%10d, p:%10p, l:%10p, r:%10p]\n", node, node->val, node->parent, node->left, node->right);
    }

    return;
}		/* -----  end of function debug_node  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  debug_tree
 *  Description:  
 * =============================================================================
 */
    void
debug_tree (BinstTree tree)
{
    if (NULL != tree) {
        debug_tree(tree->left);
        debug_node(tree);
        debug_tree(tree->right);
    }

    return;
}		/* -----  end of function debug_tree  ----- */

#endif /* __DEBUG__ */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  create_node
 *  Description:  
 * =============================================================================
 */
    BinstNodePtr
create_node (int val)
{
    BinstNodePtr ptr = (BinstNode *)malloc(sizeof(BinstNode));

    ptr->val = val;
    ptr->parent = NULL;
    ptr->left = NULL;
    ptr->right = NULL;

    return ptr;
}		/* -----  end of function create_node  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  free_node
 *  Description:  
 * =============================================================================
 */
    void
free_node (BinstNodePtr n)
{
    free(n);

    return;
}		/* -----  end of function free_node  ----- */


/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  free_tree
 *  Description:  
 * =============================================================================
 */
    void
free_tree (BinstTree tree)
{
    if (NULL != tree) {
        free_tree(tree->left);
        free_tree(tree->right);
        free_node(tree);
    }

    return;
}		/* -----  end of function free_tree  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  tree_insert
 *  Description:  插入元素
 * =============================================================================
 */
    BinstTree
tree_insert (BinstTree t, BinstNodePtr n)
{
    BinstNodePtr y = NULL, x = t;
    
    while (NULL != x) {                     /* Find parent of n. */
        y = x;
        if (n->val < x->val) {
            x = x->left;
        } else {
            x = x->right;
        }
    }

    n->parent = y;                          /* Assigned parent of n. */

                                            /* Append the n. */
    if (NULL == y) {                        /* Tree was empty. */
        t = n;
    } else {                                /* Tree wasn't empty. */
        if (n->val < y->val) {
            y->left = n;
        } else {
            y->right = n;
        }
    }

    return t;
}		/* -----  end of function tree_insert  ----- */
/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  tree_inorder_walk
 *  Description:  中序遍历二叉树
 * =============================================================================
 */
    void
tree_inorder_walk (BinstTree tree)
{
    if (NULL != tree) {
        debug_tree(tree->left);
        debug_node(tree);
        debug_tree(tree->right);
    }

    return;
}		/* -----  end of function tree_inorder_walk  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  tree_search
 *  Description:  递归查找
 * =============================================================================
 */
    BinstNodePtr
tree_search (BinstTree tree, int needle)
{
    if (NULL == tree || tree->val == needle) {
        return tree;
    } else if (tree->val > needle) {
        return tree_search(tree->left, needle);
    } else {
        return tree_search(tree->right, needle);
    }
}		/* -----  end of function tree_search  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  tree_search_iterative
 *  Description:  迭代查找
 * =============================================================================
 */
    BinstNodePtr
tree_search_iterative (BinstTree tree, int needle)
{
    BinstNodePtr x = tree;

    while (NULL != x && x->val != needle) {
        if (x->val > needle) {
            x = x->left;
        } else {
            x = x->right;
        }
    }

    return x;
}		/* -----  end of function tree_search_iterative  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  tree_minimum
 *  Description:  最小值
 * =============================================================================
 */
    BinstNodePtr
tree_minimum (BinstTree tree)
{
    BinstNodePtr x = tree;

    while (NULL != x->left) {
        x = x->left;
    }

    return x;
}		/* -----  end of function tree_minimum  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  tree_maximum
 *  Description:  最大值
 * =============================================================================
 */
    BinstNodePtr
tree_maximum (BinstTree tree)
{
    BinstNodePtr x = tree;

    while (NULL != x->right) {
        x = x->right;
    }

    return x;
}		/* -----  end of function tree_maximum  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  tree_successor
 *  Description:  查找后继
 * =============================================================================
 */
    BinstNodePtr
tree_successor (BinstNodePtr node)
{
    BinstNodePtr x = node, y = NULL;

    if (NULL != x->right) return tree_minimum(x->right);

    y = x->parent;

    while (NULL != y && y->right == x) {
        x = y;
        y = y->parent;
    }

    return y;
}		/* -----  end of function tree_successor  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  tree_predecessor
 *  Description:  查找前驱
 * =============================================================================
 */
    BinstNodePtr
tree_predecessor (BinstNodePtr node)
{
    BinstNodePtr x = node, y = NULL;

    if (NULL != x->left) return tree_maximum(x->left);

    y = x->parent;

    while (NULL != y && y->left == x) {
        x = y;
        y = y->parent;
    }

    return y;
}		/* -----  end of function tree_predecessor  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  tree_delete
 *  Description:  删除元素
 * =============================================================================
 */
    BinstTree
tree_delete (BinstTree t, BinstNodePtr n)
{
    BinstNodePtr y = NULL, x = NULL;

    if (NULL == n->left || NULL == n->right) {
        y = n;
    } else {
        y = tree_successor(n);
    }

    if (NULL != y->left) {
        x = y->left;
    } else {
        x = y->right;
    }

    if (NULL != x) {
        x->parent = y->parent;
    }

    if (NULL == y->parent) {
        t = x;
    } else if (y == y->parent->left) {
        y->parent->left = x;
    } else {
        y->parent->right = x;
    }

    if (y != n) {
        n->val = y->val;
    }

    free_node(y);

    return t;
}		/* -----  end of function tree_delete  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  main
 *  Description:  
 * =============================================================================
 */
    int
main ( int argc, char *argv[] )
{
    BinstTree tree = NULL;
    BinstNodePtr node_ptr = NULL;
    int i, len;
    int a[MAX_SIZE] = {8, 3, 10, 1, 6, 14, 4, 7, 13};

    len = 9;
    for (i=0; i<len; i++) {
        node_ptr = create_node(a[i]);
        tree = tree_insert(tree, node_ptr);
    }
    
    printf("==tree_inorder_walk==\n");
    tree_inorder_walk(tree);

    printf("==tree_search==\n");
    node_ptr = tree_search(tree, 7);
    debug_node(node_ptr);

    printf("==tree_search_iterative==\n");
    node_ptr = tree_search_iterative(tree, 7);
    debug_node(node_ptr);

    printf("==tree_minimum==\n");
    node_ptr = tree_minimum(tree);
    debug_node(node_ptr);

    printf("==tree_maximum==\n");
    node_ptr = tree_maximum(tree);
    debug_node(node_ptr);

    printf("==tree_successor==\n");
    node_ptr = tree_search_iterative(tree, 7);
    node_ptr = tree_successor(node_ptr);
    debug_node(node_ptr);

    printf("==tree_predecessor==\n");
    node_ptr = tree_search(tree, 7);
    node_ptr = tree_predecessor(node_ptr);
    debug_node(node_ptr);

    printf("==tree_delete==\n");
    node_ptr = tree_search(tree, 13);
    tree = tree_delete(tree, node_ptr);
    debug_tree(tree);

    printf("==tree_delete==\\n");
    node_ptr = tree_search(tree, 10);
    tree = tree_delete(tree, node_ptr);
    debug_tree(tree);

    printf("==tree_delete==\n");
    node_ptr = tree_search(tree, 3);
    tree = tree_delete(tree, node_ptr);
    debug_tree(tree);

    printf("==tree_delete==\n");
    node_ptr = tree_search(tree, 8);
    tree = tree_delete(tree, node_ptr);
    debug_tree(tree);

    free_tree(tree);

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
