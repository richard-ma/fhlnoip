FOR i=1 TO len(array) \ 2 /* 循环次数为n整除2次 */
    /* 变量递增递减均可，这里使用递增 */
    t = array(i)
    array(i) = array(len(array) - (i - 1))
    array(len(array) - (i - 1)) = t
    /* 借助t变量交换两个变量的值 */
    /* 仔细体会len(array) - (i - 1)表达式的含义 */
NEXT i
