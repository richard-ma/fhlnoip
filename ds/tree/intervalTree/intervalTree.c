/*
 * =============================================================================
 *
 *       Filename:  intervalTree.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  10/30/2010 04:00:03 PM
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
#include	<string.h>

#define __DEBUG__ 1
#define MAX_SIZE 100

#define RED 0
#define BLACK 1

typedef struct in_node {
    int low;              /* interval low point */
    int high;                /* interval high point */
    int max;                /* The Maximum point */
    int color;              /* node color */
    struct in_node *parent; /* parent pointer */
    struct in_node *left;   /* left child pointer */
    struct in_node *right;  /* right child pointer */
} InNode, *InNodePtr;
typedef InNodePtr InTree;

#ifdef __DEBUG__
/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  debug_node
 *  Description:  
 * =============================================================================
 */
    void
debug_node (InNodePtr node, InNodePtr nil)
{
    char color_buffer[8];

    if (nil != node) {
        if (RED == node->color) {
            strcpy(color_buffer, "RED");
        } else if (BLACK == node->color) {
            strcpy(color_buffer, "BLACK");
        } else {
            strcpy(color_buffer, "Unknown");
        }

        printf("%10p[[%5d, %5d], max:%10d, c:%8s, p:%10p, l:%10p, r:%10p]\n",
                node,
                node->low,
                node->high,
                node->max,
                color_buffer,
                node->parent,
                node->left,
                node->right);
    }

    return;
}		/* -----  high of function debug_node  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  debug_tree
 *  Description:  
 * =============================================================================
 */
    void
debug_tree (InTree tree, InNodePtr nil)
{
    if (nil != tree) {
        debug_tree(tree->left, nil);
        debug_node(tree, nil);
        debug_tree(tree->right, nil);
    }

    return;
}		/* -----  high of function debug_tree  ----- */
#endif /* __DEBUG__ */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  update_max
 *  Description:  
 * =============================================================================
 */
    void
update_max (InTree node, InNodePtr nil)
{
    int max;

    if (node != nil) {
        update_max(node->left, nil);
        update_max(node->right, nil);
        max = node->left->max > node->right->max ? 
            node->left->max : node->right->max;
        max = max > node->high ?
            max : node->high;
        node->max = max;
    }

    return;
}		/* -----  end of function update_max  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  create_node
 *  Description:  
 * =============================================================================
 */
    InNodePtr
create_node (int low, int high, InNodePtr nil)
{
    InNodePtr ptr = (InNode *)malloc(sizeof(InNode));

    ptr->low = low;
    ptr->high = high;
    ptr->max = high;
    ptr->color = RED;
    ptr->parent = nil;
    ptr->left = nil;
    ptr->right = nil;

    return ptr;
}		/* -----  high of function create_node  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  create_nil_node
 *  Description:  
 * =============================================================================
 */
    InNodePtr
create_nil_node (void)
{
    InNodePtr ptr = (InNode *)malloc(sizeof(InNode));

    ptr->low = 0;
    ptr->high = 0;
    ptr->max = 0;
    ptr->color = BLACK;
    ptr->parent = NULL;
    ptr->left = NULL;
    ptr->right = NULL;

    return ptr;
}		/* -----  high of function create_nil_node  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  free_node
 *  Description:  
 * =============================================================================
 */
    void
free_node (InNodePtr node)
{
    free(node);

    return;
}		/* -----  high of function free_node  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  free_tree
 *  Description:  
 * =============================================================================
 */
    void
free_tree (InTree tree, InNodePtr nil)
{
    if (nil != tree) {
        free_tree(tree->left, nil);
        free_tree(tree->right, nil);
        free_node(tree);
    }

    return;
}		/* -----  high of function free_tree  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  left_rotate
 *  Description:  左旋转
 * =============================================================================
 */
    InTree
left_rotate (InTree tree, InNodePtr x, InNodePtr nil)
{
    InNodePtr y = x->right;
    x->right = y->left;
    if (nil != y->left) {
        y->left->parent = x;
    }

    y->parent = x->parent;

    if (nil == x->parent) {
        tree = y;
    } else if (x == x->parent->left) {
        x->parent->left = y;
    } else {
        x->parent->right = y;
    }

    y->left = x;
    x->parent = y;

    return tree;
}		/* -----  high of function left_rotate  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  right_rotate
 *  Description:  右旋转
 * =============================================================================
 */
    InTree
right_rotate (InTree tree, InNodePtr x, InNodePtr nil)
{
    InNodePtr y = x->left;
    x->left = y->right;
    if (nil != y->right) {
        y->right->parent = x;
    }

    y->parent = x->parent;

    if (nil == x->parent) {
        tree = y;
    } else if (x == x->parent->left) {
        x->parent->left = y;
    } else {
        x->parent->right = y;
    }

    y->right = x;
    x->parent = y;

    return tree;
}		/* -----  high of function right_rotate  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  in_insert_fixup
 *  Description:  插入调整
 * =============================================================================
 */
    InTree
in_insert_fixup (InTree tree, InNodePtr node, InNodePtr nil)
{
    InNodePtr y;

    while (RED == node->parent->color) {
        if (node->parent == node->parent->parent->left) {
            y = node->parent->parent->right;
            if (RED == y->color) { /* Case1 */
                node->parent->color = BLACK;
                y->color = BLACK;
                node->parent->parent->color = RED;
                node = node->parent->parent;
            } else if (node == node->parent->right) { /* Case2 */
                node = node->parent;
                tree = left_rotate(tree, node, nil);
            } else { /* Case3 */
                node->parent->color = BLACK;
                node->parent->parent->color = RED;
                tree = right_rotate(tree, node->parent->parent, nil);
            }
        } else {
            y = node->parent->parent->left;
            if (RED == y->color) { /* Case1 */
                node->parent->color = BLACK;
                y->color = BLACK;
                node->parent->parent->color = RED;
                node = node->parent->parent;
            } else if (node == node->parent->left) { /* Case2 */
                node = node->parent;
                tree = right_rotate(tree, node, nil);
            } else { /* Case3 */
                node->parent->color = BLACK;
                node->parent->parent->color = RED;
                tree = left_rotate(tree, node->parent->parent, nil);
            }
        }
    }

    tree->color = BLACK;

    update_max(tree, nil);

    return tree;
}		/* -----  high of function in_insert_fixup  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  in_insert
 *  Description:  插入元素
 * =============================================================================
 */
    InTree
in_insert (InTree tree, InNodePtr node, InNodePtr nil)
{
    InNodePtr y = nil;
    InNodePtr x = tree;

    while (nil != x) {
        y = x;
        if (node->low < x->low) {
            x = x->left;
        } else {
            x = x->right;
        }
    }

    node->parent = y;

    if (nil == y) {
        tree = node;
    } else {
        if (node->low < y->low) {
            y->left = node;
        } else {
            y->right = node;
        }
    }

    node->left = nil;
    node->right = nil;
    node->color = RED;

    tree = in_insert_fixup(tree, node, nil);

    return tree;
}		/* -----  high of function in_insert  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  in_inorder_walk
 *  Description:  中序遍历二叉树
 * =============================================================================
 */
    void
in_inorder_walk (InTree tree, InNodePtr nil)
{
    if (nil != tree) {
        debug_tree(tree->left, nil);
        debug_node(tree, nil);
        debug_tree(tree->right, nil);
    }

    return;
}		/* -----  high of function in_inorder_walk  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  in_search
 *  Description:  查找覆盖区间
 * =============================================================================
 */
    InNodePtr
in_search (InTree tree, int low, int high, InNodePtr nil)
{
    InNodePtr x = tree;

    while (nil != x && (high < x->low || low > x->high)) {
        if (x->left != nil && x->left->max >= low) {
            x = x->left;
        } else {
            x = x->right;
        }
    }

    return x;
}		/* -----  high of function in_search  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  in_maximum
 *  Description:  最大值
 * =============================================================================
 */
    InNodePtr
in_maximum (InTree tree, InNodePtr nil)
{
    InNodePtr x = tree;

    while (nil != x->right) {
        x = x->right;
    }

    return x;
}		/* -----  high of function in_maximum  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  in_minimum
 *  Description:  最小值
 * =============================================================================
 */
    InNodePtr
in_minimum (InTree tree, InNodePtr nil)
{
    InNodePtr x = tree;

    while (nil != x->left) {
        x = x->left;
    }

    return x;
}		/* -----  high of function in_minimum  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  in_successor
 *  Description:  查找后继
 * =============================================================================
 */
    InNodePtr
in_successor (InNodePtr node, InNodePtr nil)
{
    InNodePtr x = node, y = nil;

    if (nil != x->right) return in_minimum(x->right, nil);

    y = x->parent;

    while (nil != y && y->right == x) {
        x = y;
        y = y->parent;
    }

    return y;
}		/* -----  high of function in_successor  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  in_predecessor
 *  Description:  查找前驱
 * =============================================================================
 */
    InNodePtr
in_predecessor (InNodePtr node, InNodePtr nil)
{
    InNodePtr x = node, y = nil;

    if (nil != x->left) return in_maximum(x->left, nil);

    y = x->parent;

    while (nil != y && y->left == x) {
        x = y;
        y = y->parent;
    }

    return y;
}		/* -----  high of function in_predecessor  ----- */
/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  in_delete_fixup
 *  Description:  删除调整
 * =============================================================================
 */
    InTree
in_delete_fixup (InTree tree, InNodePtr node, InNodePtr nil)
{
    InNodePtr w;

    while (node != tree && node->color == BLACK) {
        if (node == node->parent->left) {
            w = node->parent->right;
            if (w->color == RED) { /* Case1 */
                w->color = BLACK;
                node->parent->color = RED;
                left_rotate(tree, node->parent, nil);
                w = node->parent->right;
            }
            if (w->left->color == BLACK && w->right->color == BLACK) { /* Case2 */
                w->color = RED;
                node = node->parent;
            } else {
                if (w->right->color == BLACK) { /* Case3 */
                    w->left->color = BLACK;
                    w->color = RED;
                    right_rotate(tree, w, nil);
                    w = node->parent->right;
                } /* Case4 */
                w->color = node->parent->color;
                node->parent->color = BLACK;
                w->right->color = BLACK;
                left_rotate(tree, node->parent, nil);
                node = tree;
            }
        } else {
            w = node->parent->left;
            if (w->color == RED) { /* Case1 */
                w->color = BLACK;
                node->parent->color = RED;
                right_rotate(tree, node->parent, nil);
                w = node->parent->left;
            }
            if (w->left->color == BLACK && w->right->color == BLACK) { /* Case2 */
                w->color = RED;
                node = node->parent;
            } else {
                if (w->left->color == BLACK) { /* Case3 */
                    w->right->color = BLACK;
                    w->color = RED;
                    left_rotate(tree, w, nil);
                    w = node->parent->left;
                } /* Case4 */
                w->color = node->parent->color;
                node->parent->color = BLACK;
                w->left->color = BLACK;
                right_rotate(tree, node->parent, nil);
                node = tree;
            }
        }
    }

    node->color = BLACK;

    update_max(tree, nil);

    return tree;
}		/* -----  high of function in_delete_fixup  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  in_delete
 *  Description:  删除元素
 * =============================================================================
 */
    InTree
in_delete (InTree tree, InNodePtr node, InNodePtr nil)
{
    InNodePtr x, y;

    if (nil == node->left || nil == node->right) {
        y = node;
    } else {
        y = in_successor(node, nil); /* Find the successor of node. */
    }

    if (nil != y->left) {
        x = y->left;
    } else {
        x = y->right;
    }

    x->parent = y->parent;

    if (nil == y->parent) {
        tree = x;
    } else if (y == y->parent->left) {
        y->parent->left = x;
    } else {
        y->parent->right = x;
    }

    if (y != node) { /* copy the satellite data. UPDATE! When extra node struct. */
        node->low = y->low;
        node->high = y->high;
        node->max = y->max;
        node->color = y->color;
    }

    if (y->color == BLACK) {
        in_delete_fixup(tree, node, nil);
    }

    free_node(y);

    return tree;
}		/* -----  high of function in_delete  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  main
 *  Description:  
 * =============================================================================
 */
    int
main ( int argc, char *argv[] )
{
    InNodePtr node_ptr;
    InNodePtr nil = create_nil_node();
    InTree tree = nil;

    int i, len;
    int a[MAX_SIZE] = {0, 3, 5, 8, 6, 10, 8, 9, 15, 23, 16, 21, 17, 19, 19, 20, 25, 30, 26, 26};

    len = 20;
    for (i=0; i<len; i+=2) {
        node_ptr = create_node(a[i], a[i+1], nil);
        tree = in_insert(tree, node_ptr, nil);
    }
    
    printf("==in_inorder_walk==\n");
    in_inorder_walk(tree, nil);

    printf("==in_minimum==\n");
    node_ptr = in_minimum(tree, nil);
    debug_node(node_ptr, nil);

    printf("==in_maximum==\n");
    node_ptr = in_maximum(tree, nil);
    debug_node(node_ptr, nil);

    printf("==in_search==\n");
    node_ptr = in_search(tree, 17, 18, nil);
    debug_node(node_ptr, nil);

    printf("==in_successor==\n");
    node_ptr = in_successor(node_ptr, nil);
    debug_node(node_ptr, nil);

    printf("==in_predecessor==\n");
    node_ptr = in_predecessor(node_ptr, nil);
    debug_node(node_ptr, nil);

    printf("==in_delete==\n");
    node_ptr = in_search(tree, 0, 30, nil);
    tree = in_delete(tree, node_ptr, nil);
    debug_tree(tree, nil);

    printf("==in_delete==\n");
    node_ptr = in_search(tree, 0, 30, nil);
    tree = in_delete(tree, node_ptr, nil);
    debug_tree(tree, nil);

    printf("==in_delete==\n");
    node_ptr = in_search(tree, 13, 30, nil);
    tree = in_delete(tree, node_ptr, nil);
    debug_tree(tree, nil);

    printf("==in_delete==\n");
    node_ptr = in_search(tree, 16, 30, nil);
    tree = in_delete(tree, node_ptr, nil);
    debug_tree(tree, nil);

    free_tree(tree, nil);
    free_node(nil);

    return EXIT_SUCCESS;
}				/* ----------  high of function main  ---------- */

