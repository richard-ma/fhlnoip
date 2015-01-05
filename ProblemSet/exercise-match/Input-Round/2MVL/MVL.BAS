CLS
OPEN "mvl.in" FOR INPUT AS #1
OPEN "mvl.out" FOR OUTPUT AS #2
INPUT #1, n
DIM a(n)
FOR i = 1 TO n
  INPUT #1, a(i)
NEXT i
PRINT #2, "Total:"; LTRIM$(STR$(n))
FOR i = 1 TO n
  PRINT #2, LTRIM$(STR$(a(i)))
NEXT i
CLOSE #1, #2
END

