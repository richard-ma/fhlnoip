CLS
DIM casenum AS INTEGER, lens AS INTEGER, a AS INTEGER
DIM max AS INTEGER, i AS INTEGER, j AS INTEGER
DIM s AS STRING, ans AS STRING
DIM cnt(0 TO 25) AS INTEGER
a = ASC("a")
OPEN "letter.in" FOR INPUT AS #1
OPEN "letter.out" FOR OUTPUT AS #2
FOR casenum = 1 TO 5

  INPUT #1, s
  FOR i = 0 TO 25
    cnt(i) = 0
  NEXT i

  lens = LEN(s)
  FOR i = 1 TO lens
    j = ASC(MID$(s, i, 1)) - a
    cnt(j) = cnt(j) + 1
  NEXT i

  max = 0
  FOR i = 0 TO 25
    IF max < cnt(i) THEN max = cnt(i)
  NEXT i

  ans = ""
  FOR i = 0 TO 25
    IF cnt(i) = max THEN ans = ans + CHR$(i + a)
  NEXT i
  PRINT #2, ans

NEXT casenum
CLOSE #1, #2
END

