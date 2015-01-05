/* bound变量初始化 */
count = 0 /* 计数器初始化 */
FOR i=1 TO len(array) 
    IF array(i) >= bound THEN count = count + 1 /* 满足条件，计数器+1 */
NEXT i
/* 结束循环 遍历完成 count为计数结果 */
