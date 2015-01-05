CLS
OPEN "count.in" FOR INPUT AS #1
OPEN "count.out" FOR OUTPUT AS #2

DIM a(0 TO 9)

INPUT #1, n
FOR i = 1 TO n
  s$ = LTRIM$(STR$(i))
  FOR j = 1 TO LEN(s$)
    num = VAL(MID$(s$, j, 1))
    a(num) = a(num) + 1
  NEXT j
NEXT i

FOR i = 0 TO 9
  PRINT #2, LTRIM$(STR$(a(i))); " ";
NEXT i
PRINT

CLOSE #1
CLOSE #2
END

