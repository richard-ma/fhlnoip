CLS
OPEN "additio.in" FOR INPUT AS #1
OPEN "additio.out" FOR OUTPUT AS #2

INPUT #1, a$, b$

alen = LEN(a$): blen = LEN(b$)
IF alen >= blen THEN l = alen ELSE l = blen
DIM a(l), b(l), s(l + 1)
FOR i = 1 TO l
  a(i) = 0
  b(i) = 0
NEXT i

FOR i = alen TO 1 STEP -1
  a(alen - i + 1) = VAL(MID$(a$, i, 1))
NEXT i

FOR i = blen TO 1 STEP -1
  b(blen - i + 1) = VAL(MID$(b$, i, 1))
NEXT i

PRINT
c = 0
FOR i = 1 TO l
  s(i) = a(i) + b(i) + c
  c = s(i) \ 10
  s(i) = s(i) MOD 10
NEXT i
s(l + 1) = c

FOR i = l + 1 TO 1 STEP -1
  IF i = l + 1 AND s(i) = 0 THEN
    PRINT #2, "";
  ELSE
    PRINT #2, LTRIM$(STR$(s(i)));
  END IF
NEXT i

CLOSE #1
CLOSE #2
END

