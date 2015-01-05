CLS
OPEN "rev.in" FOR INPUT AS #1
OPEN "rev.out" FOR OUTPUT AS #2
INPUT #1, n
DIM a(n)
FOR i = 1 TO n
  INPUT #1, a(i)
NEXT i
FOR i = n TO 1 STEP -1
  PRINT #2, LTRIM$(STR$(a(i))); " ";
NEXT i
CLOSE #1, #2
END

