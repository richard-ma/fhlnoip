/* 初始化，将所有数字标记为素数 */
FOR i = 1 TO n
    prime(i) = 1
NEXT i

prime(1) = 0 /* 1既不是素数也不是合数，所以标记为非素数*/

FOR i = 2 TO n /* 从2到n循环 */
    IF prime(i) = 1 THEN /* 如果当前这个数为素数 */
        /* 循环初值已优化 */
        FOR j = i * i TO n STEP i /* 从i的平方到n循环 */
            prime(j) = 0 /* 将所有i的倍数都标记为非质数 */
        NEXT j
    END IF
NEXT i
/* 循环完毕，所有值为1所对应的索引为素数 */
