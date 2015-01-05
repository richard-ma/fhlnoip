/*
 * =============================================================================
 *
 *       Filename:  redBlackTree.c
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

typedef struct rbt_st_node {
    int val;                        /* value */
    int color;                      /* color */
    struct rbt_st_node *parent;     /* parent pointer */
    struct rbt_st_node *left;       /* left child pointer */
    struct rbt_st_node *right;      /* right child pointer */
} RbNode, *RbNodePtr;
typedef RbNodePtr RbTree;

#ifdef __DEBUG__
/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  debug_node
 *  Description:  
 * =============================================================================
 */
    void
debug_node (RbNodePtr node, RbNodePtr nil)
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

        printf("%10p[v:%10d, c:%8s, p:%10p, l:%10p, r:%10p]\n",
                node,
                node->val,
                color_buffer,
                node->parent,
                node->left,
                node->right);
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
debug_tree (RbTree tree, RbNodePtr nil)
{
    if (nil != tree) {
        debug_tree(tree->left, nil);
        debug_node(tree, nil);
        debug_tree(tree->right, nil);
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
    RbNodePtr
create_node (int val, RbNodePtr nil)
{
    RbNodePtr ptr = (RbNode *)malloc(sizeof(RbNode));

    ptr->val = val;
    ptr->color = RED;
    ptr->parent = nil;
    ptr->left = nil;
    ptr->right = nil;

    return ptr;
}		/* -----  end of function create_node  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  create_nil_node
 *  Description:  
 * =============================================================================
 */
    RbNodePtr
create_nil_node (void)
{
    RbNodePtr ptr = (RbNode *)malloc(sizeof(RbNode));

    ptr->val = 0;
    ptr->color = BLACK;
    ptr->parent = NULL;
    ptr->left = NULL;
    ptr->right = NULL;

    return ptr;
}		/* -----  end of function create_nil_node  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  free_node
 *  Description:  
 * =============================================================================
 */
    void
free_node (RbNodePtr node)
{
    free(node);

    return;
}		/* -----  end of function free_node  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  free_tree
 *  Description:  
 * =============================================================================
 */
    void
free_tree (RbTree tree, RbNodePtr nil)
{
    if (nil != tree) {
        free_tree(tree->left, nil);
        free_tree(tree->right, nil);
        free_node(tree);
    }

    return;
}		/* -----  end of function free_tree  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  left_rotate
 *  Description:  左旋转
 * =============================================================================
 */
    RbTree
left_rotate (RbTree tree, RbNodePtr x, RbNodePtr nil)
{
    RbNodePtr y = x->right;
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
}		/* -----  end of function left_rotate  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  right_rotate
 *  Description:  右旋转
 * =============================================================================
 */
    RbTree
right_rotate (RbTree tree, RbNodePtr x, RbNodePtr nil)
{
    RbNodePtr y = x->left;
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
}		/* -----  end of function right_rotate  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  rb_insert_fixup
 *  Description:  插入调整
 * =============================================================================
 */
    RbTree
rb_insert_fixup (RbTree tree, RbNodePtr node, RbNodePtr nil)
{
    RbNodePtr y;

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

    return tree;
}		/* -----  end of function rb_insert_fixup  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  rb_insert
 *  Description:  插入元素
 * =============================================================================
 */
    RbTree
rb_insert (RbTree tree, RbNodePtr node, RbNodePtr nil)
{
    RbNodePtr y = nil;
    RbNodePtr x = tree;

    while (nil != x) {
        y = x;
        if (node->val < x->val) {
            x = x->left;
        } else {
            x = x->right;
        }
    }

    node->parent = y;

    if (nil == y) {
        tree = node;
    } else {
        if (node->val < y->val) {
            y->left = node;
        } else {
            y->right = node;
        }
    }

    node->left = nil;
    node->right = nil;
    node->color = RED;

    tree = rb_insert_fixup(tree, node, nil);

    return tree;
}		/* -----  end of function rb_insert  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  rb_inorder_walk
 *  Description:  中序遍历二叉树
 * =============================================================================
 */
    void
rb_inorder_walk (RbTree tree, RbNodePtr nil)
{
    if (nil != tree) {
        debug_tree(tree->left, nil);
        debug_node(tree, nil);
        debug_tree(tree->right, nil);
    }

    return;
}		/* -----  end of function rb_inorder_walk  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  rb_search
 *  Description:  递归查找
 * =============================================================================
 */
    RbNodePtr
rb_search (RbTree tree, int needle, RbNodePtr nil)
{
    if (nil == tree || tree->val == needle) {
        return tree;
    } else if (tree->val > needle) {
        return rb_search(tree->left, needle, nil);
    } else {
        return rb_search(tree->right, needle, nil);
    }
}		/* -----  end of function rb_search  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  rb_search_iterative
 *  Description:  迭代查找
 * =============================================================================
 */
    RbNodePtr
rb_search_iterative (RbTree tree, int needle, RbNodePtr nil)
{
    RbNodePtr x = tree;

    while (nil != x && x->val != needle) {
        if (x->val > needle) {
            x = x->left;
        } else {
            x = x->right;
        }
    }

    return x;
}		/* -----  end of function rb_search_iterative  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  rb_maximum
 *  Description:  最大值
 * =============================================================================
 */
    RbNodePtr
rb_maximum (RbTree tree, RbNodePtr nil)
{
    RbNodePtr x = tree;

    while (nil != x->right) {
        x = x->right;
    }

    return x;
}		/* -----  end of function rb_maximum  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  rb_minimum
 *  Description:  最小值
 * =============================================================================
 */
    RbNodePtr
rb_minimum (RbTree tree, RbNodePtr nil)
{
    RbNodePtr x = tree;

    while (nil != x->left) {
        x = x->left;
    }

    return x;
}		/* -----  end of function rb_minimum  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  rb_successor
 *  Description:  查找后继
 * =============================================================================
 */
    RbNodePtr
rb_successor (RbNodePtr node, RbNodePtr nil)
{
    RbNodePtr x = node, y = nil;

    if (nil != x->right) return rb_minimum(x->right, nil);

    y = x->parent;

    while (nil != y && y->right == x) {
        x = y;
        y = y->parent;
    }

    return y;
}		/* -----  end of function rb_successor  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  rb_predecessor
 *  Description:  查找前驱
 * =============================================================================
 */
    RbNodePtr
rb_predecessor (RbNodePtr node, RbNodePtr nil)
{
    RbNodePtr x = node, y = nil;

    if (nil != x->left) return rb_maximum(x->left, nil);

    y = x->parent;

    while (nil != y && y->left == x) {
        x = y;
        y = y->parent;
    }

    return y;
}		/* -----  end of function rb_predecessor  ----- */
/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  rb_delete_fixup
 *  Description:  删除调整
 * =============================================================================
 */
    RbTree
rb_delete_fixup (RbTree tree, RbNodePtr node, RbNodePtr nil)
{
    RbNodePtr w;

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

    return tree;
}		/* -----  end of function rb_delete_fixup  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  rb_delete
 *  Description:  删除元素
 * =============================================================================
 */
    RbTree
rb_delete (RbTree tree, RbNodePtr node, RbNodePtr nil)
{
    RbNodePtr x, y;

    if (nil == node->left || nil == node->right) {
        y = node;
    } else {
        y = rb_successor(node, nil); /* Find the successor of node. */
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
        node->val = y->val;
        node->color = y->color;
    }

    if (y->color == BLACK) {
        rb_delete_fixup(tree, node, nil);
    }

    free_node(y);

    return tree;
}		/* -----  end of function rb_delete  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  main
 *  Description:  
 * =============================================================================
 */
    int
main ( int argc, char *argv[] )
{
    RbNodePtr node_ptr;
    RbNodePtr nil = create_nil_node();
    RbTree tree = nil;

    int i, len;
    int a[MAX_SIZE] = {8, 3, 10, 1, 6, 14, 4, 7, 13};

    len = 9;
    for (i=0; i<len; i++) {
        node_ptr = create_node(a[i], nil);
        tree = rb_insert(tree, node_ptr, nil);
    }
    
    printf("==rb_inorder_walk==\n");
    rb_inorder_walk(tree, nil);

    printf("==rb_search==\n");
    node_ptr = rb_search(tree, 7, nil);
    debug_node(node_ptr, nil);

    printf("==rb_search_iterative==\n");
    node_ptr = rb_search_iterative(tree, 7, nil);
    debug_node(node_ptr, nil);

    printf("==rb_minimum==\n");
    node_ptr = rb_minimum(tree, nil);
    debug_node(node_ptr, nil);

    printf("==rb_maximum==\n");
    node_ptr = rb_maximum(tree, nil);
    debug_node(node_ptr, nil);

    printf("==rb_successor==\n");
    node_ptr = rb_search_iterative(tree, 7, nil);
    node_ptr = rb_successor(node_ptr, nil);
    debug_node(node_ptr, nil);

    printf("==rb_predecessor==\n");
    node_ptr = rb_search(tree, 7, nil);
    node_ptr = rb_predecessor(node_ptr, nil);
    debug_node(node_ptr, nil);

    printf("==rb_delete==\n");
    node_ptr = rb_search(tree, 13, nil);
    tree = rb_delete(tree, node_ptr, nil);
    debug_tree(tree, nil);

    printf("==rb_delete==\n");
    node_ptr = rb_search(tree, 10, nil);
    tree = rb_delete(tree, node_ptr, nil);
    debug_tree(tree, nil);

    printf("==rb_delete==\n");
    node_ptr = rb_search(tree, 3, nil);
    tree = rb_delete(tree, node_ptr, nil);
    debug_tree(tree, nil);

    printf("==rb_delete==\n");
    node_ptr = rb_search(tree, 8, nil);
    tree = rb_delete(tree, node_ptr, nil);
    debug_tree(tree, nil);

    free_tree(tree, nil);
    free_node(nil);

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

