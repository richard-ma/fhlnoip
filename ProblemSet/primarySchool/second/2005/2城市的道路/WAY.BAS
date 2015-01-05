CLS
OPEN "way.in" FOR INPUT AS #1
OPEN "way.out" FOR OUTPUT AS #2

INPUT #1, m, n
DIM a(m, n)

FOR i = 1 TO m
  a(i, 1) = 1
NEXT i

FOR j = 1 TO n
  a(1, j) = 1
NEXT j

FOR i = 2 TO m
  FOR j = 2 TO n
    a(i, j) = a(i, j - 1) + a(i - 1, j)
  NEXT j
NEXT i

PRINT #2, LTRIM$(STR$(a(m, n)))

CLOSE #1
CLOSE #2
END

