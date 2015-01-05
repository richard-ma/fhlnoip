CLS
OPEN "mat.in" FOR INPUT AS #1
OPEN "mat.out" FOR OUTPUT AS #2

DIM a(9)
FOR i = 1 TO 9
  INPUT #1, a(i)
  IF a(i) = -1 THEN k = i
NEXT i

s = 0
IF k < 4 THEN
  FOR i = 4 TO 6
    s = s + a(i)
  NEXT i
ELSE
  FOR i = 1 TO 3
    s = s + a(i)
  NEXT i
END IF

IF k <= 3 THEN
  FOR i = 1 TO 3
    s = s - a(i)
  NEXT i
ELSEIF k > 3 AND k <= 6 THEN
  FOR i = 4 TO 6
    s = s - a(i)
  NEXT i
ELSE
  FOR i = 7 TO 9
    s = s - a(i)
  NEXT i
END IF
PRINT #2, LTRIM$(STR$(s - 1))

CLOSE #1
CLOSE #2
END

