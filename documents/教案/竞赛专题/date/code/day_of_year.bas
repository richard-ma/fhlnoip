/* 计算1月1日到m月d日经过天数 */
DIM month(12)
/* 制作月份表，俗称“打表” */
month(1) = 31: month(2) = 28: month(3) = 31
month(4) = 30: month(5) = 31: month(6) = 30 
month(7) = 31: month(8) = 31: month(9) = 30
month(10) = 31: month(11) = 30: month(12) = 31 

sum = 0
FOR i = 1 TO m-1
    sum = sum + month(i)
NEXT i

sum = sum + d2
/* 结果在sum变量中 */
