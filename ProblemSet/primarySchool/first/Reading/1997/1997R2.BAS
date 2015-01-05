CLS
10  DIM b(10)
20  READ a$
30  FOR I = 0 TO 10
40    b(I) = 0
50  NEXT I
60  la = LEN(a$)
70  FOR I = 1 TO la
80    b(VAL(MID$(a$, I, 1))) = b(VAL(MID$(a$, I, 1))) + 1
90  NEXT I
100 FOR I = 1 TO 9
110   FOR j = 0 TO 10 - I
120     IF b(j) < b(j + 1) THEN 140
130     temp = b(j): b(j) = b(j + 1): b(j + 1) = temp
140   NEXT j
150 NEXT I
160 j = 0
170 IF b(j) = 0 THEN j = j + 1: GOTO 170
180 FOR I = j TO 10: PRINT b(I); : NEXT I
190 DATA 22334455664567655555445
200 END

