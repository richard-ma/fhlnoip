CLS
OPEN "cham.in" FOR INPUT AS #1
OPEN "cham.out" FOR OUTPUT AS #2

INPUT #1, m, r
DIM a(m)
FOR i = 1 TO m
  INPUT #1, a(i)
NEXT i

min = a(1)
FOR i = 1 TO m
  IF a(i) < min THEN min = a(i)
NEXT i

IF min < r THEN
  PRINT #2, "New Record!"
ELSE
  PRINT #2, LTRIM$(STR$(min))
END IF

CLOSE #1, #2
END

