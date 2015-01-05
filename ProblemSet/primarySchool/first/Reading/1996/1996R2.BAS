CLS
OPEN "1996r2.out" FOR OUTPUT AS #2
DIM a(11)
a(1) = 1
a(2) = 1
FOR k = 2 TO 10
  a(k + 1) = 1
  FOR i = k TO 2 STEP -1
    a(i) = a(i) + a(i - 1)
  NEXT i
NEXT k
FOR k = 1 TO 11
  PRINT #2, a(k);
NEXT k
CLOSE #2
END

