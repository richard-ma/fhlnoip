CLS
OPEN "step.in" FOR INPUT AS #1
OPEN "step.out" FOR OUTPUT AS #2

INPUT #1, n

DIM a(n)
a(1) = 1
a(2) = 2

FOR i = 3 TO n
  a(i) = a(i - 1) + a(i - 2)
NEXT i

PRINT #2, LTRIM$(STR$(a(n)))

CLOSE #1, #2
END

