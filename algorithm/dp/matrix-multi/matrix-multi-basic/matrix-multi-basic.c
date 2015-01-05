/*
 * =============================================================================
 *
 *       Filename:  matrix-multi-basic.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11/17/2010 11:23:30 AM
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

typedef struct matrix_array {
    int r_t;
    int c_t;
    int *array;
} Matrix, *MatrixPtr;

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  create_matrix
 *  Description:  
 * =============================================================================
 */
    MatrixPtr 
create_matrix (int r, int c)
{
    MatrixPtr m = (Matrix *)malloc(sizeof(Matrix));
    int capacity;

    m->r_t = r;
    m->c_t = c;
    capacity = m->r_t * m->c_t;
    m->array = (int*)malloc(sizeof(int) * capacity);

    return m;
}		/* -----  end of function create_matrix  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  free_matrix
 *  Description:  
 * =============================================================================
 */
    void
free_matrix (MatrixPtr m)
{
    free(m->array);
    free(m);

    return;
}		/* -----  end of function free_matrix  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  index_conv
 *  Description:  
 * =============================================================================
 */
    int
index_conv (MatrixPtr m, int r, int c)
{
    return r * m->c_t + c;
}		/* -----  end of function index_conv  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  set_data
 *  Description:  
 * =============================================================================
 */
    MatrixPtr 
set_data (MatrixPtr m, int r, int c, int data)
{
    m->array[index_conv(m, r, c)] = data;

    return m;
}		/* -----  end of function set_data  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  get_data
 *  Description:  
 * =============================================================================
 */
    int 
get_data (MatrixPtr m, int r, int c)
{
    return m->array[index_conv(m, r, c)];
}		/* -----  end of function get_data  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  debug_matrix
 *  Description:  
 * =============================================================================
 */
    void
debug_matrix (MatrixPtr m)
{
    int i, j;
    printf("[%d * %d]\n", m->r_t, m->c_t);
    for (i=0; i<m->r_t; i++) {
        for (j=0; j<m->c_t; j++) {
            printf("%8d", get_data(m, i, j));
        }
        printf("\n");
    }

    return;
}		/* -----  end of function debug_matrix  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  tran_matrix
 *  Description:  
 * =============================================================================
 */
    MatrixPtr
transpose_matrix (MatrixPtr m)
{
    int i, j, t, idx;
    for (i=0; i<m->r_t * m->c_t; i++) {
        idx = (i % m->c_t) * m->c_t + i/m->c_t;
        t = m->array[i];
        m->array[i] = m->array[idx];
        m->array[idx] = t;
    }

    t = m->r_t;
    m->r_t = m->c_t;
    m->c_t = t;

    return m;
}		/* -----  end of function tran_matrix  ----- */

/* 
 * ===  FUNCTION  ==============================================================
 *         Name:  main
 *  Description:  
 * =============================================================================
 */
    int
main ( int argc, char *argv[] )
{
    MatrixPtr m = create_matrix(3, 3);
    set_data(m, 0, 1, 7);
    debug_matrix(m);
    transpose_matrix(m);
    debug_matrix(m);
    free_matrix(m);

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

