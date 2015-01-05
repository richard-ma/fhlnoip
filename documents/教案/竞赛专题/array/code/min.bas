min = array(1) /* 初始化min变量 */

FOR i=2 TO len(array) /* 从第二个到最后一个循环，第一个元素不用比较 */
    IF array(i) < min THEN min = array(i) /* 对每一个元素做比较操作 */
NEXT i
/* 结束循环 遍历完成 最小值在min中 */
