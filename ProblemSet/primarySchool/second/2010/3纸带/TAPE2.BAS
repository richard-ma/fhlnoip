CLS
OPEN "tape.in" FOR INPUT AS #1
OPEN "tape.out" FOR OUTPUT AS #2

INPUT #1, n
DIM a(n)
FOR i = 1 TO n
  INPUT #1, a(i)
NEXT i

sum = 0
max = 0
FOR i = 1 TO n
  sum = sum + a(i)
  IF sum > max THEN max = sum
  IF sum < 0 THEN sum = 0
NEXT i

PRINT LTRIM$(STR$(max))

CLOSE #1, #2
END

