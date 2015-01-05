DIM s(100)
INPUT n
FOR i = 1 TO n
  INPUT s(i)
NEXT i
IF s(1) > s(2) THEN
  a = s(1)
  b = s(2)
ELSE
  a = s(2)
  b = s(1)
END IF

FOR i = 3 TO n
  IF s(i) > a THEN
    b = a
    a = s(i)
  ELSEIF s(i) > b THEN
    b = s(i)
  END IF
NEXT i
PRINT b
END

