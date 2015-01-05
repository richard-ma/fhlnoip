CLS
OPEN "count.in" FOR INPUT AS #1
OPEN "count.out" FOR OUTPUT AS #2
INPUT #1, n
DIM a(10)
FOR i = 1 TO 10
  a(i) = 0
NEXT i
FOR i = 1 TO n
  s$ = LTRIM$(STR$(i))
  c = LEN(s$)
  FOR j = 1 TO c
    z$ = MID$(s$, j, 1)
    IF z$ = "1" THEN a(1) = a(1) + 1
    IF z$ = "2" THEN a(2) = a(2) + 1
    IF z$ = "3" THEN a(3) = a(3) + 1
    IF z$ = "4" THEN a(4) = a(4) + 1
    IF z$ = "5" THEN a(5) = a(5) + 1
    IF z$ = "6" THEN a(6) = a(6) + 1
    IF z$ = "7" THEN a(7) = a(7) + 1
    IF z$ = "8" THEN a(8) = a(8) + 1
    IF z$ = "9" THEN a(9) = a(9) + 1
    IF z$ = "0" THEN a(10) = a(10) + 1
  NEXT j
NEXT i
PRINT #2, LTRIM$(STR$(a(10))); " ";
FOR i = 1 TO 9
  PRINT #2, LTRIM$(STR$(a(i))); " ";
NEXT i
CLOSE #1, #2
END

