CLS
OPEN "2010r4.ans" FOR OUTPUT AS #2
DIM r(101), i, j AS INTEGER
FOR i = 2 TO 100
  r(i) = 1
NEXT i

FOR i = 2 TO 100
  IF r(i) <> 0 THEN
    j = i + i
    WHILE j <= 100
      r(j) = 0
      j = j + i
    WEND
  END IF
NEXT i
PRINT #2, r(91)

