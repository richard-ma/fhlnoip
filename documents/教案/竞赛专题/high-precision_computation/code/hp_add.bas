/* 将c数组初始化为0 */
FOR i = 1 TO n + 1
    c(i) = 0
NEXT i

/* 模拟加法竖式计算过程 */
FOR i = 1 TO n
    c(i) = c(i) + a(i) + b(i) /* 相同数位相加 */
    IF c(i) >= 10 THEN /* 满十进一 */
        c(i) = c(i) MOD 10 
        c(i+1) = c(i+1) + 1
    END IF
NEXT i
/* 结果在c数组里，但是有可能出现一些多余的0，如何去掉？*/
