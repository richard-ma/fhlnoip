OPEN "quake.in" FOR INPUT AS #1
OPEN "quake.out" FOR OUTPUT AS #2
INPUT #1, n, m
DIM map(n, n), d(n), b(n)
FOR i = 1 TO n
  FOR j = 1 TO n
    map(i, j) = 0
  NEXT j
NEXT i
FOR i = 1 TO m
  INPUT #1, x, y, w
  map(x, y) = w
  map(y, x) = w
NEXT i
FOR x = 20 TO 1 STEP -1
  first = 0
  last = 1
  d(1) = 1
  FOR i = 1 TO n
    b(i) = 0
  NEXT i
  b(1) = 1
  DO WHILE first < last
    first = first + 1
    i = d(first)
    FOR j = 1 TO n
      IF (map(i, j) >= x) AND (b(j) = 0) THEN
        last = last + 1
        d(last) = j
        b(j) = 1
      END IF
    NEXT j
  LOOP
  IF b(n) = 1 THEN EXIT FOR
NEXT x
PRINT #2, x
CLOSE #1, #2
END

