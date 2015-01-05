CLS
OPEN "fword.in" FOR INPUT AS #1
OPEN "fword.out" FOR OUTPUT AS #2
INPUT #1, s$
ans$ = ""
l = LEN(s$)
t$ = MID$(s$, 1, 1)
IF "a" <= t$ AND t$ <= "z" THEN
  ans$ = t$
END IF
FOR i = 2 TO l
  t$ = MID$(s$, i, 1)
  IF "a" <= t$ AND t$ <= "z" THEN
    IF MID$(s$, i - 1, 1) = " " THEN
      ans$ = ans$ + t$
    END IF
  END IF
NEXT i
PRINT #2, ans$
CLOSE #1, #2
END

