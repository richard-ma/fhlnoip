CLS
OPEN "hat.in" FOR INPUT AS #1
OPEN "hat.out" FOR OUTPUT AS #2

INPUT #1, n
sum = 0
FOR i = 1 TO n
  INPUT #1, tmp

  IF tmp >= n THEN
    PRINT #2, "-1"
    CLOSE #1, #2
    END
  END IF

  sum = sum + tmp
NEXT i
ans = sum \ (n - 1)

IF sum MOD (n - 1) <> 0 OR ans > n THEN
  PRINT #2, "-1"
ELSE
  PRINT #2, LTRIM$(STR$(ans))
END IF

CLOSE #1, #2
END

