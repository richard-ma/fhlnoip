CLS
OPEN "mouse.in" FOR INPUT AS #1
OPEN "mouse.out" FOR OUTPUT AS #2

INPUT #1, n
DIM a(n)
FOR i = 1 TO n
  a(i) = 1
NEXT i

a(1) = 0
FOR i = 2 TO n
  FOR j = i * 2 TO n STEP i
    a(j) = 0
  NEXT j
NEXT i

FOR i = 1 TO n
  IF a(i) = 1 THEN PRINT #2, LTRIM$(STR$(i)); " ";
NEXT i
PRINT #2,

CLOSE #1
CLOSE #2
END

