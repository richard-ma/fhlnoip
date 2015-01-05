CLS
OPEN "cake.in" FOR INPUT AS #1
OPEN "cake.out" FOR OUTPUT AS #2

INPUT #1, n

n = n - 1
i = 0
WHILE n - i > 0
  n = n - i
  i = i + 1
WEND

PRINT #2, LTRIM$(STR$(i))

CLOSE #1, #2
END

