CLS
OPEN "jinjin.in" FOR INPUT AS #1
OPEN "jinjin.out" FOR OUTPUT AS #2

p = 0
FOR i = 1 TO 7
  INPUT #1, x, y, z
  s = x + y + z
  IF s > 8 THEN
    IF s > p THEN
      ans = i
      p = s
    END IF
  END IF
NEXT i

PRINT #2, LTRIM$(STR$(ans))
CLOSE #1
CLOSE #2
END

