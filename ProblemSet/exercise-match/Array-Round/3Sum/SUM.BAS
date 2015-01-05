CLS
OPEN "sum.in" FOR INPUT AS #1
OPEN "sum.out" FOR OUTPUT AS #2
INPUT #1, n
DIM a(n)
FOR i = 1 TO n
  INPUT #1, a(i)
NEXT i
s = 0
FOR i = 1 TO n
  s = s + a(i)
NEXT i
PRINT #2, LTRIM$(STR$(s))
END

