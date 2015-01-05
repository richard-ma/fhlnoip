CLS
OPEN "hali.in" FOR INPUT AS #1
OPEN "hali.out" FOR OUTPUT AS #2

INPUT #1, n
DIM a(n)
FOR i = 1 TO n
  INPUT #1, a(i)
NEXT i

ans = 1
FOR i = 1 TO n
  ans = ans * a(i)
NEXT i

PRINT #2, LTRIM$(STR$(ans))


CLOSE #1, #2
END

