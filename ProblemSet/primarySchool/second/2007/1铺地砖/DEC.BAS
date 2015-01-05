CLS
OPEN "dec.in" FOR INPUT AS #1
OPEN "dec.out" FOR OUTPUT AS #2

INPUT #1, m, n
DIM a$(n)
FOR i = 1 TO m
  INPUT #1, a$(i)
NEXT i

rcnt = 0
FOR i = 1 TO m
  flg = 0
  FOR j = 1 TO n
    IF ASC(MID$(a$(i), j, 1)) = 45 THEN
      flg = 1
    ELSE
      IF flg = 1 THEN
        rcnt = rcnt + 1
        flg = 0
      END IF
    END IF
  NEXT j
  IF flg = 1 THEN rcnt = rcnt + 1
NEXT i

vcnt = 0
FOR i = 1 TO n
  flg = 0
  FOR j = 1 TO m
    IF ASC(MID$(a$(j), i, 1)) = 124 THEN
      flg = 1
    ELSE
      IF flg = 1 THEN
        vcnt = vcnt + 1
        flg = 0
      END IF
    END IF
  NEXT j
  IF flg = 1 THEN vcnt = vcnt + 1
NEXT i

PRINT #2, LTRIM$(STR$(rcnt)); " "; LTRIM$(STR$(vcnt))

CLOSE #1, #2
END

