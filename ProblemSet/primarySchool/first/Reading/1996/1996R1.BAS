CLS
OPEN "1996r1.out" FOR OUTPUT AS #2
x1 = 3
x2 = 8
FOR i = 1 TO 5
  x = (x1 + x2) * 2
  x1 = x2
  x2 = x
NEXT i
PRINT #2, "x="; x
CLOSE #2
END

