/* 将十进制转换为X进制（X <= 10）*/
base = 2 /* 十进制转换为二进制 */
pow = 1 /* 初始化 */

WHILE num <> 0
    bit = num MOD base /* 计算余数 */

    /* 结果左移一位，并加入当前余数的pow倍 */
    /* 将bit放在当前ans的左侧 */
    ans = bit * pow + ans

    num = num \ base /* 求下一次相除的被除数 */
    pow = pow * 10
WEND
/* 最终结果在ans中 */
