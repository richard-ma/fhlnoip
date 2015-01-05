CLS
DIM a(10)
DIM s(10)
OPEN "trea.in" FOR INPUT AS #1
OPEN "trea.out" FOR OUTPUT AS #2

INPUT #1, n
FOR z = 1 TO n
  ssum = 0
  re = 1000 * 10
  FOR i = 1 TO 10
    a(i) = 0
    INPUT #1, s(i)
    ssum = ssum + s(i)
  NEXT i

  FOR i = 1 TO 1024
    FOR j = 1 TO 10
      IF a(j) = 2 THEN
        a(j) = 0
        a(j + 1) = a(j + 1) + 1
      END IF
    NEXT j

    FOR j = 1 TO 10
      IF a(j) = 1 THEN sum = sum + s(i)
    NEXT j
  
    IF ABS(ssum - sum * 2) < re THEN re = ABS(ssum - sum * 2)
    a(1) = a(1) + 1
  NEXT i

  PRINT #2, LTRIM$(STR$(re))
NEXT z
CLOSE #1, #2
END

