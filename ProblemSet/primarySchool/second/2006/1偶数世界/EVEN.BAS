CLS
DIM a(10) AS INTEGER
OPEN "even.in" FOR INPUT AS #1
OPEN "even.out" FOR OUTPUT AS #2
INPUT #1, n
FOR i = 1 TO n
  INPUT #1, a(i)
NEXT i
ans = -1
FOR i = 1 TO n - 1
  FOR j = i + 1 TO n
    t = a(i) + a(j)
    flg = 1
    FOR k = 2 TO t STEP 2
      IF t MOD (k * 2) = 0 THEN
        flg = 0
        EXIT FOR
      END IF
    NEXT k
    IF flg = 1 THEN
      IF t > ans THEN
        ans = t
      END IF
    END IF
  NEXT j
NEXT i
WRITE #2, ans
CLOSE #1
CLOSE #2
END

