CLS
OPEN "larg.in" FOR INPUT AS #1
OPEN "lage.out" FOR OUTPUT AS #2
INPUT #1, n
DIM a(n)
FOR i = 1 TO n
  INPUT #1, a(i)
NEXT i
s = 0
FOR i = 1 TO n
  IF a(i) >= 70 THEN s = s + 1
NEXT i
PRINT #2, LTRIM$(STR$(s))
CLOSE #1, #2
END

