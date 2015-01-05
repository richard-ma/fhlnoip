CLS
OPEN "game.in" FOR INPUT AS #1
OPEN "game.out" FOR OUTPUT AS #2
INPUT #1, n

i = 0
WHILE 2 ^ i <= n
  i = i + 1
WEND

s = n - 2 ^ (i - 1)

ans = 1
FOR i = 1 TO s
  ans = ans + 2
NEXT i

PRINT #2, LTRIM$(STR$(ans))

CLOSE #1, #2
END

