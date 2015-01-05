CLS
OPEN "min.in" FOR INPUT AS #1
OPEN "min.out" FOR OUTPUT AS #2

INPUT #1, n
DIM a(n)

FOR i = 1 TO n
  INPUT #1, a(i)
NEXT i

min = a(1)
idx = 1
FOR i = 1 TO n
  IF a(i) < min THEN
    min = a(i)
    idx = i
  END IF
NEXT i

PRINT #2, LTRIM$(STR$(idx)); " "; LTRIM$(STR$(min))

CLOSE #1, #2
END

