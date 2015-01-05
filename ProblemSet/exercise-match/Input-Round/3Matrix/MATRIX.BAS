CLS
OPEN "matrix.in" FOR INPUT AS #1
OPEN "matrix.out" FOR OUTPUT AS #2
INPUT #1, m, n
DIM a(m, n)
FOR i = 1 TO m
  FOR j = 1 TO n
    INPUT #1, a(i, j)
  NEXT j
NEXT i
FOR i = 1 TO m
  FOR j = 1 TO n
    PRINT #2, LTRIM$(STR$(a(i, j))); " ";
  NEXT j
  PRINT #2,
NEXT i
PRINT #2, LTRIM$(STR$(m)); " ";LTRIM$(STR$(n))
CLOSE #1, #2
END

