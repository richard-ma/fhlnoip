CLS
OPEN "bus.in" FOR INPUT AS #1
OPEN "bus.out" FOR OUTPUT AS #2

INPUT #1, n
DIM s(n)
FOR i = 1 TO n
  INPUT #1, s(i)
NEXT i
INPUT #1, a, b

sum = a
FOR i = 1 TO n
  sum = sum + s(i)
NEXT i

PRINT #2, LTRIM$(STR$(sum - b))

CLOSE #1
CLOSE #2
END

