CLS
OPEN "game.in" FOR INPUT AS #1
OPEN "game.out" FOR OUTPUT AS #2

INPUT #1, n
INPUT #1, s1$
INPUT #1, s2$

ans1 = 0: ans2 = 0
FOR i = 1 TO n
  a$ = MID$(s1$, i, 1)
  b$ = MID$(s2$, i, 1)
  IF a$ = "R" THEN
    IF b$ = "R" THEN
      ans1 = ans1 + 1
      ans2 = ans2 + 1
    ELSEIF b$ = "S" THEN
      ans1 = ans1 + 2
    ELSE
      ans2 = ans2 + 2
    END IF
  ELSEIF a$ = "S" THEN
    IF b$ = "R" THEN
      ans2 = ans2 + 2
    ELSEIF b$ = "S" THEN
      ans1 = ans1 + 1
      ans2 = ans2 + 1
    ELSE
      ans1 = ans1 + 2
    END IF
  ELSE
    IF b$ = "R" THEN
      ans1 = ans1 + 2
    ELSEIF b$ = "S" THEN
      ans2 = ans2 + 2
    ELSE
      ans1 = ans1 + 1
      ans2 = ans2 + 1
    END IF
  END IF
NEXT i

IF ans1 > ans2 THEN
  PRINT #2, "A "; LTRIM$(STR$(ans1))
ELSEIF ans1 < ans2 THEN
  PRINT #2, "B "; LTRIM$(STR$(ans2))
ELSE
  PRINT #2, "TIE "; LTRIM$(STR$(ans1))
END IF

CLOSE #1
CLOSE #2
END

