INPUT n
PRINT n;
WHILE n > 1
  IF n MOD 2 = 0 THEN
    n = n \ 2
  ELSE
    n = 3 * n + 1
  END IF
  PRINT "--"; n;
WEND

