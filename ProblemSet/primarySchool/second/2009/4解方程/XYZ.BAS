CLS
OPEN "xyz.in" FOR INPUT AS #1
OPEN "xyz.out" FOR OUTPUT AS #2

INPUT #1, r
DIM s(32)
FOR i = 1 TO 31
  s(i) = i ^ 2
NEXT i

FOR i = 1 TO 32
  FOR j = 1 TO 32
    FOR k = 1 TO 32
      IF s(i) + s(j) + s(k) = r THEN
        cnt = cnt + 1
      END IF
    NEXT k
  NEXT j
NEXT i

PRINT #2, LTRIM$(STR$(cnt))

CLOSE #1
CLOSE #2
END

