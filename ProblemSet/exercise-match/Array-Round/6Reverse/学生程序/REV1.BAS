CLS
OPEN "rev.in" FOR INPUT AS #1
OPEN "rev.out" FOR OUTPUT AS #2
INPUT #1, n
DIM a(n)
FOR i = 1 TO n
  INPUT #1, a(i)
NEXT i
t = 0
FOR i = 1 TO FIX(n / 2)
  t = a(i): a(i) = a(n - i + 1): a(n - i + 1) = t
NEXT i
FOR i = 1 TO n
  PRINT #2, LTRIM$(STR$(a(i))); " ";
NEXT i
CLOSE #1, #2
END

