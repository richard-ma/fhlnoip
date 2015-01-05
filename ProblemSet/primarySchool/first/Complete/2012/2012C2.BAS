DECLARE FUNCTION gcd (a AS INTEGER, b AS INTEGER)

INPUT a, b
IF (a > b) THEN
  t = a
  a = b
  b = t
END IF
g = gcd(a, b)
ans = a * b / g
PRINT ans

FUNCTION gcd (a AS INTEGER, b AS INTEGER)
  IF (a = 0) THEN
    t = b
  ELSE
    t = gcd(b MOD a, b)
  END IF
  gcd = t
END FUNCTION

