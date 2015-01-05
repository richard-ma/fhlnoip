/* 判断year变量中存储的年份是否为闰年 */
flg = 0 /* 默认年份为平年 */
IF year MOD 400 = 0 OR (year MOD 4 = 0 AND year MOD 100 <> 0) THEN
    flg = 1 /* 该年份为闰年 */
END IF
/* 结果为flg变量 */
