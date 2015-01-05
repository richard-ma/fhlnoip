sum = 0 /* 初始化sum变量 */

FOR i=1 TO len(array) 
    sum = sum + array(i) /* 注意这里两个sum的含义 */
NEXT i
/* 结束循环 遍历完成 和在sum中 */

average = sum / len(array) /* 用和除以元素个数 */ 
