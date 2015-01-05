CLS
OPEN "robot.in" FOR INPUT AS #1
OPEN "robot.out" FOR OUTPUT AS #2

INPUT #1, r, c
DIM s$(r)
FOR i = 1 TO r
  INPUT #1, s$(i)
  FOR j = 1 TO c
    IF MID$(s$(i), j, 1) = "*" THEN
      t = i
      k = j
    END IF
  NEXT j
NEXT i
INPUT #1, c$

w = LEN(c$)
FOR i = 1 TO w
  y$ = MID$(c$, i, 1)
  IF y$ = "N" AND MID$(s$(t - 1), k, 1) <> "#" THEN
    t = t - 1
  ELSEIF y$ = "S" AND MID$(s$(t + 1), k, 1) <> "#" THEN
    t = t + 1
  ELSEIF y$ = "E" AND MID$(s$(t), k + 1, 1) <> "#" THEN
    k = k + 1
  ELSEIF y$ = "W" AND MID$(s$(t), k - 1, 1) <> "#" THEN
    k = k - 1
  END IF
NEXT i

PRINT #2, LTRIM$(STR$(t))
PRINT #2, LTRIM$(STR$(k))

CLOSE #1
CLOSE #2
END

