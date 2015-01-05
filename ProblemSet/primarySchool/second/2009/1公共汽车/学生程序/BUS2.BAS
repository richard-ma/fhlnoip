CLS
OPEN "bus.in" FOR INPUT AS #1
OPEN "bus.out" FOR OUTPUT AS #2
INPUT #1, n
FOR i = 1 TO n + 1
  INPUT #1, a
  b = b + a
NEXT i
INPUT #1, a
b = b - a
PRINT #2, LTRIM$(STR$(b))
CLOSE #1, #2
END

