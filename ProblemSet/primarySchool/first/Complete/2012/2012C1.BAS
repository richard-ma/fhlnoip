INPUT n

FOR i = 1 TO n
  INPUT a(i), b(i)
NEXT i

FOR i = 1 TO n
  FOR j = i + 1 TO n
    IF (a(i) > a(j)) OR (a(i) = a(j) AND b(i) > b(j)) THEN
      t = a(i)
      a(i) = a(j)
      a(j) = t
      t = b(i)
      b(i) = b(j)
      b(j) = t
    END IF
  NEXT j
NEXT i

