CLS
OPEN "password.in" FOR INPUT AS #1
OPEN "password.out" FOR OUTPUT AS #2

INPUT #1, a$
w = LEN(a$)

DIM s$(1 TO 10)
p = 0: t = 0: c = 1
FOR i = 1 TO w
  IF MID$(a$, i, 1) = " " OR MID$(a$, i, 1) = "$" THEN
    p = t: t = i
    s$(c) = RTRIM$(LTRIM$(MID$(a$, p + 1, t - p)))
    c = c + 1
  END IF
NEXT i
c = c - 1
s$(c) = LEFT$(s$(c), LEN(s$(c)) - 1)

IF s$(1) = "1" THEN
  m = VAL(s$(3)): n = VAL(s$(4)): z$ = ""
  s$(2) = MID$(s$(2), m, n)
  FOR i = LEN(s$(2)) TO 1 STEP -1
    z$ = z$ + MID$(s$(2), i, 1)
  NEXT i
  PRINT #2, z$
ELSE
  m = VAL(s$(2)): n = VAL(s$(3)): z$ = ""
  DIM a(n)
  FOR i = 1 TO n
    a(i) = 1
  NEXT i
  a(1) = 0
  FOR i = 2 TO n
    FOR j = i * 2 TO n STEP i
      a(j) = 0
    NEXT j
  NEXT i
  FOR i = m TO n
    IF a(i) = 1 THEN z$ = z$ + LTRIM$(STR$(i))
  NEXT i
  PRINT #2, z$
END IF

CLOSE #1
CLOSE #2
END

