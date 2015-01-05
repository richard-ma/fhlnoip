/* 计算m1月d1日到m2月d2日经过天数 */
DIM month(12)
/* 制作月份表，俗称“打表” */
month(1) = 31: month(2) = 28: month(3) = 31
month(4) = 30: month(5) = 31: month(6) = 30 
month(7) = 31: month(8) = 31: month(9) = 30
month(10) = 31: month(11) = 30: month(12) = 31 

sum = 0
IF m1 = m2 THEN
    /* 当起止日期在同一个月份中时，直接相减 */
    sum = d2 - d1
ELSE
    /* 第一部分 */
    sum = sum + month(m1) - d1

    /* 第二部分 */
    FOR i = m1+1 TO m2-1
        sum = sum + month(i)
    NEXT i

    /* 第三部分 */
    sum = sum + d2
END IF
/* 结果在sum变量中 */
