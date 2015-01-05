CLS
OPEN "maze.in" FOR INPUT AS #1
OPEN "maze.out" FOR OUTPUT AS #2

INPUT #1, m, n
DIM a(m, n)
FOR i = 1 TO m
  FOR j = 1 TO n
    INPUT #1, a(i, j)
  NEXT j
NEXT i

FOR i = 2 TO n
  a(1, i) = a(1, i) + a(1, i - 1)
NEXT i

FOR i = 2 TO m
  a(i, 1) = a(i, 1) + a(i - 1, 1)
NEXT i

FOR i = 2 TO m
  FOR j = 2 TO n
    IF a(i - 1, j) > a(i, j - 1) THEN
      a(i, j) = a(i, j) + a(i - 1, j)
    ELSE
      a(i, j) = a(i, j) + a(i, j - 1)
    END IF
  NEXT j
NEXT i

PRINT #2, LTRIM$(STR$(a(m, n)))

CLOSE #1, #2
END

