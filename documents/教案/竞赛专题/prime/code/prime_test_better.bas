flg = 1 /* 初始化标志变量，默认这个数字是素数 */
FOR i=2 TO sqrt(n) /* 从2到sqrt(n)检测 */
    IF n mod i = 0 THEN /* 能够被其中一个i整除 */
        flg = 0 /* 那么n不是素数（有其他约数） */
        EXIT FOR /* 退出循环（能够确定不是素数）*/
    END IF
NEXT i
