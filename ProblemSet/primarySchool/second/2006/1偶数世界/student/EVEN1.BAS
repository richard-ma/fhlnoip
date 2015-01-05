CLS
OPEN "even.in" FOR INPUT AS #1
OPEN "even.out" FOR OUTPUT AS #2
INPUT #1, n
DIM a(n)
FOR i = 1 TO n
  INPUT #1, a(i)
NEXT i
FOR i = 1 TO n - 1
  x = x + i
NEXT i
DIM b(x)
c = 1
FOR i = 1 TO n - 1
  FOR j = i + 1 TO n
    b(c) = a(i) + a(j)
    c = c + 1
  NEXT j
NEXT i
d = -1
FOR i = 1 TO x
  IF (b(i) - 2) MOD 4 = 0 THEN
    IF b(i) > d THEN d = b(i)
  END IF
NEXT i
PRINT #2, LTRIM$(STR$(d))
CLOSE #1, #2
END

