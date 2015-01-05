CLS
OPEN "mat.in" FOR INPUT AS #1
OPEN "mat.out" FOR OUTPUT AS #2
DIM a(9)
FOR i = 1 TO 9
  INPUT #1, a(i)
NEXT i

sum1 = a(1) + a(2) + a(3)
sum2 = a(4) + a(5) + a(6)
sum3 = a(7) + a(8) + a(9)

IF sum1 < sum2 THEN
  ans = sum2 - sum1
ELSEIF sum2 < sum1 THEN
  ans = sum1 - sum2
ELSE
  ans = sum2 - sum3
END IF
PRINT #2, LTRIM$(STR$(ans - 1))
CLOSE #1, #2
END

