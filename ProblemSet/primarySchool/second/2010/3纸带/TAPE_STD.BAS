OPEN "tape.in" FOR INPUT AS #1
OPEN "tape.out" FOR OUTPUT AS #2
INPUT #1, n
DIM a(n), b(n, n)
FOR i = 1 TO n
  INPUT #1, a(i)
NEXT i
FOR i = 1 TO n
  FOR j = 1 TO n
    IF i + j <= n THEN
      s = i + j
      FOR k = j TO s
        b(i, j) = b(i, j) + a(k)
      NEXT k
    ELSE EXIT FOR
    END IF
  NEXT j
NEXT i
FOR i = 1 TO n
  FOR j = 1 TO n
    IF b(i, j) > max THEN max = b(i, j)
  NEXT j
NEXT i
PRINT #2, max
CLOSE #1, #2
END

