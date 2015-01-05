n = 78
cnt = 0
WHILE n > 0
  IF n MOD 2 = 0 THEN
    cnt = cnt + 1
  END IF
  n = n \ 2
WEND
PRINT cnt

