CLS

DIM a(10, 10)

FOR i = 1 TO 10
  FOR j = 1 TO 10
    a(i, j) = 3
  NEXT j
NEXT i

FOR i = 1 TO 10
  FOR j = 1 TO 10
    PRINT a(i, j);
  NEXT j
  PRINT
NEXT i

END
