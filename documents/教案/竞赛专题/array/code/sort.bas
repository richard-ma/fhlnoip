FOR i=1 TO len(array) - 1 /* 从第一个元素到倒数第二个元素 */
    FOR j=i TO len(array) /* 从第i个到最后一个 */
        IF array(i) < array(j) THEN /* 如果第j个元素大于第i个*/
            /* 交换当前第i个和第j个元素 */
            t = array(i)
            array(i) = array(j)
            array(j) = t
        END IF
        /* 本层循环完成找出最大值，并将其移动到第i个元素 */
    NEXT j
NEXT i /* i+1 未排序区域减少1 */
/* 第i个元素是排序区域和未排序区域的分界线 */ 
