DIM arr(101), n, i, ans, n1, n2, r AS INTEGER
INPUT n
FOR i = 1 TO n
  INPUT arr(i)
NEXT i
ans = arr(1)
FOR i = 2 TO n
  n1 = ans
  n2 = arr(i)
  r = n1 MOD n2

  WHILE r <> 0
    n1 = n2
    n2 = r
    r = n1 MOD n2
  WEND
  ans = n2
NEXT i
PRINT ans


