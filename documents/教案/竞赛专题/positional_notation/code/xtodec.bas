/* 将X进制转换为十进制（X <= 10） */
base = 2 /* 将二进制转换为十进制 */
pow = 1 /* 加权值计算 */
ans = 0 /* 十进制结果 */

WHILE num <> 0
    bit = num MOD 10

    weight = bit * pow /* 计算每一项 */
    ans = ans + weight /* 求和 */

    num = num \ 10 /* 数字右移1位 */
    pow = pow * base /* 计算对应权值 */
WEND
/* 最终结果在ans中 */
