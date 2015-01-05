CLS

DIM a(5, 4)

FOR i = 1 TO 5
  FOR j = 1 TO 4
    a(i, j) = i + j
  NEXT j
NEXT i

FOR i = 1 TO 5
  FOR j = 1 TO 4
    PRINT a(i, j);
  NEXT j
  PRINT
NEXT i

END
