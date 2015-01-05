CLS
OPEN "max.in" FOR INPUT AS #1
OPEN "max.out" FOR OUTPUT AS #2

DIM a(10)

FOR i = 1 TO 10
  INPUT #1, a(i)
NEXT i

max = a(1)
FOR i = 1 TO 10
  IF a(i) > max THEN max = a(i)
NEXT i

PRINT #2, LTRIM$(STR$(max))

CLOSE #1, #2
END

