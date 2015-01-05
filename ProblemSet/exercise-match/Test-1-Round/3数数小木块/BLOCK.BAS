CLS
OPEN "block.in" FOR INPUT AS #1
OPEN "block.out" FOR OUTPUT AS #2

INPUT #1, n

sum = 1
t = 1
FOR i = 2 TO n
  t = t + i
  sum = sum + t
NEXT i

PRINT #2, LTRIM$(STR$(sum))

CLOSE #1, #2
END

