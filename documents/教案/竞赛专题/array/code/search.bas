result = -1 /* 初始化reslut为没找到 */
FOR i=1 TO len(array) /* 遍历所有元素 */
    IF needle = array(i) THEN /* needle为要查找的目标值 */
        result = i /* 对应索引为i */
        EXIT FOR /* 退出循环 */
    END IF
NEXT i
