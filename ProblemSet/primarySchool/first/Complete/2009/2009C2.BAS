DIM i, min, n, num(101) AS INTEGER
INPUT n
FOR i = 1 TO n
  INPUT num(i)
NEXT i
min = num(1)

FOR i = 2 TO n
  IF num(i) < min THEN
    min = num(i)
  END IF
NEXT i
PRINT min

