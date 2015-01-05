CLS
OPEN "trea.in" FOR INPUT AS #1
OPEN "trea.out" FOR OUTPUT AS #2
DIM a(10), b(10)
INPUT #1, t
FOR x = 1 TO t
  total = 0
  FOR i = 1 TO 10  
    INPUT #1, a(i)
    total = total + a(i)
  NEXT i
  half = total \ 2
  max = 0
  FOR i = 1 TO 10
    b(i) = 0
  NEXT i
  i = 10
  DO WHILE i > 0
    sum = 0
    FOR j = 1 TO 10
      IF b(j) = 1 THEN sum = sum + a(j)
    NEXT j
    IF (sum > max) AND (sum <= half) THEN
      max = sum
    END IF
    i = 10
    DO WHILE i > 0 AND b(i) = 1
      i = i - 1
    LOOP
    IF i > 0 THEN
       b(i) = 1
       FOR j = i + 1 TO 10
         b(j) = 0
       NEXT j
     END IF
  LOOP
  WRITE #2, total - max - max
NEXT x
CLOSE #1, #2
END
