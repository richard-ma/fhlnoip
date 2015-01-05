CLS
OPEN "ex.in" FOR INPUT AS #1
OPEN "ex.out" FOR OUTPUT AS #2

INPUT #1, n
DIM array(n)

FOR i = 1 TO n
  INPUT #1, array(i)
NEXT i

PRINT "PRINT:";
count = 0
sum = 0
max = array(1)
FOR i = 1 TO n
  sum = sum + array(i)
  IF array(i) > max THEN max = array(i)
  IF array(i) > 5 AND array(i) <= 8 THEN count = count + 1
  PRINT " "; LTRIM$(STR$(array(i)));
NEXT i
PRINT
PRINT "MAX: "; LTRIM$(STR$(max))
PRINT "AVERAGE: "; LTRIM$(STR$(sum / n))
PRINT "COUNT:"; LTRIM$(STR$(count))

CLOSE #1, #2
END

