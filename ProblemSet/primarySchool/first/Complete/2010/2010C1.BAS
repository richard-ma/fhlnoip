n = 5
FOR i = 1 TO n
  FOR j = 1 TO n
    IF i <= j THEN
      k = 1
    ELSE
      k = 2
    END IF
    PRINT TAB(j * 5); k;
  NEXT j
  PRINT
NEXT i
END

