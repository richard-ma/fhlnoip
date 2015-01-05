CLS
OPEN "fword.in" FOR INPUT AS #1
OPEN "fword.out" FOR OUTPUT AS #2

INPUT #1, s$

l = LEN(s$)

bflg = 1
ans$ = ""

FOR i = 1 TO l
  t$ = MID$(s$, i, 1)

  IF t$ = " " THEN
    bflg = 1
  END IF

  IF t$ >= "a" AND t$ <= "z" AND bflg = 1 THEN
    ans$ = ans$ + t$
    bflg = 0
  END IF
NEXT i

PRINT #2, ans$

CLOSE #1, #2
END

