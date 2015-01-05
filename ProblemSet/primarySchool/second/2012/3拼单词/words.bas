//本题摘自xx-064同学
OPEN "words.in" FOR INPUT AS #1
OPEN "words.out" FOR OUTPUT AS #2
INPUT #1, n
FOR i = 1 TO n
  INPUT #1, x$
  INPUT #1, y$
  x$ = x$ + " "
  y$ = y$ + " "
  a = LEN(x$)
  b = LEN(y$)
  flag = 0
  k = 0
  FOR j = 1 TO a
    c$ = MID$(x$, k + 1, 1)
    k = k + 1
    IF c$ = " " THEN
      k = k - 1
      w$ = LEFT$(x$, k)
      u$ = LEFT$(y$, k)
      t1$ = LEFT$(w$, 1) + RIGHT$(w$, 1)
      t2$ = LEFT$(u$, 1) + RIGHT$(u$, 1)
      IF t1$ <> t2$ THEN
        flag = 1
        EXIT FOR
      END IF
      x$ = MID$(x$, k + 1)
      y$ = MID$(y$, k + 1)
      k = 0
      s = 0
      DO WHILE MID$(x$, 1, 1) = " "
        s = s + 1
        x$ = RIGHT$(x$, a - s)
      LOOP
      s = 0
      DO WHILE MID$(y$, 1, 1) = " "
        s = s + 1
        y$ = RIGHT$(y$, b - s)
      LOOP
   END IF
  NEXT j
  IF flag = 0 THEN
    PRINT #2, "Yes"
  ELSE
    PRINT #2, "No"
  END IF
NEXT i
CLOSE
END

      

