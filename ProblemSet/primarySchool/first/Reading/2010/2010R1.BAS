CLS
OPEN "2010r1.ans" FOR OUTPUT AS #2
READ a, b
WHILE b <> 0
  temp = a
  a = b
  b = temp MOD b
WEND
PRINT #2, a
DATA 105, 63

