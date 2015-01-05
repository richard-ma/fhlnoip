CLS
OPEN "bus.in" FOR INPUT AS #1
OPEN "bus.out" FOR OUTPUT AS #2
INPUT #1, n
DIM c(n)
FOR i = 1 TO n
  INPUT #1, c(i)
NEXT i
INPUT #1, a, b
s = a
FOR i = 1 TO n
  s = s + c(i)
NEXT i
s = s - b
PRINT #2, LTRIM$(STR$(s))
CLOSE #1
CLOSE #2
END

