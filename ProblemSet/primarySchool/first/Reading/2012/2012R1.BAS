n = 1357
t = 0
WHILE (n > 0)
  t = t * 10 + (n MOD 10 + 1)
  n = n \ 10
WEND
PRINT t

