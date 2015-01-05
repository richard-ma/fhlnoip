CLS
OPEN "hide.in" FOR INPUT AS #1
OPEN "hide.out" FOR OUTPUT AS #2

INPUT #1, s$

l = LEN(s$)

max = 0
ans = 1

FOR i = 1 TO l
  IF MID$(s$, i) >= "0" AND MID$(s$, i) <= "9" THEN
    j = i + 1
    WHILE MID$(s$, j) >= "0" AND MID$(s$, i) <= "9"
      j = j + 1
    WEND

    ts$ = ""
    FOR k = i TO j
      ts$ = ts$ + MID$(s$, k)
    NEXT k
    tval = VAL(ts$)

    IF tval > max THEN
      max = tval
      ans = i
    END IF

    i = j
  END IF
NEXT i

PRINT #2, ans

CLOSE #1, #2
END

