CLS
OPEN "bill.in" FOR INPUT AS #1
OPEN "bill.out" FOR OUTPUT AS #2

INPUT #1, n
DIM a(n)
FOR i = 1 TO n
  INPUT #1, a(i)
NEXT i

sum = 0
FOR i = 1 TO n
  sum = sum + a(i)
NEXT i

PRINT #2, LTRIM$(STR$(sum))

CLOSE #1, #2
END

