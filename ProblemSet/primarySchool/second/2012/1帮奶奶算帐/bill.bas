//本题摘自xx-064同学
open "bill.in" for input as #1
open "bill.out" for output as #2 
input #1,n
for i=1 to n
  input #1,x,y
   s=s+x*y
next i
write #2,s
close
end