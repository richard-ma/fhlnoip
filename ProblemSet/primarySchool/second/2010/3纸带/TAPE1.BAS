CLS
OPEN "tape.in" FOR INPUT AS #1
OPEN "tape.out" FOR OUTPUT AS #2

INPUT #1, n
DIM a(n)
FOR i = 1 TO n
  INPUT #1, a(i)
NEXT i

max = a(1)
FOR i = 1 TO n
  FOR j = 1 TO n - i
    sum = 0

    FOR k = j TO j + i
      sum = sum + a(k)
    NEXT k

    IF sum > max THEN
      max = sum
    END IF
  NEXT j
NEXT i

IF max < 0 THEN max = 0

PRINT #2, LTRIM$(STR$(max))

CLOSE #1, #2
END

