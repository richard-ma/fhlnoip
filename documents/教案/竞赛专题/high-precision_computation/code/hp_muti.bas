/* 将c数组初始化为0 */
FOR i = 1 to n
    c(i) = 0
NEXT i

/* 模仿乘法竖式计算 */
FOR i = 1 TO len(a)
    FOR j = 1 TO len(b)
        c(i+j-1) = a(i) * b(j) + c(i+j-1)
        IF c(i+j-1) >= 10 THEN /* 处理进位 */
            c(i+j-1+1) = c(i+j-1+1) + c(i+j-1) \ 10
            c(i+j-1) = c(i+j-1) MOD 10
        END IF
    NEXT j
NEXT i
/* 结果在c数组里 */
