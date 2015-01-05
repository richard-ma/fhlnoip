//本题摘自xx-289同学
open "gobang.in" for input as #1
open "gobang.out" for output as #2
input #1,p,q,n
dim a(p,q)
for k=1 to n
  input #1,x,y
  if k mod 2=1 then
    a(x,y)=1
  elseif k mod 2=0 then
    a(x,y)=2
  end if
  i=x
  j=y
  do while i-1>0 and a(i-1,j)=a(x,y)
    i=i-1
    s1=s1+1
  loop 
  i=x
  j=y
  do while i+1<=p and a(i+1,j)=a(x,y)
    i=i+1
    s1=s1+1
  loop 
  i=x
  j=y
  do while j-1>0 and a(i,j-1)=a(x,y)
    j=j-1
    s2=s2+1
  loop 
  i=x
  j=y
  do while j+1<=q and a(i,j+1)=a(x,y)
    j=j+1
    s2=s2+1
  loop 
  i=x
  j=y
  do while i-1>0 and j-1>0 and a(i-1,j-1)=a(x,y)
    j=j-1
    i=i-1
    s3=s3+1
  loop 
  i=x
  j=y
  do while i+1<=p and j+1<=q and a(i+1,j+1)=a(x,y)
    j=j+1
    i=i+1
    s3=s3+1
  loop 
  i=x
  j=y
  do while i-1>0 and j+1<=q and a(i-1,j+1)=a(x,y)
    j=j+1
    i=i-1
    s4=s4+1
  loop 
  i=x
  j=y
  do while i+1<=p and j-1>0 and a(i+1,j-1)=a(x,y)
    j=j-1
    i=i+1
    s4=s4+1
  loop
  if (s1=4 or s2=4 or s3=4 or s4=4) and a(x,y)=1 then
    print #2,ltrim$(str$(k\2+1));" Win"
    f=1
    exit for
  elseif (s1=4 or s2=4 or s3=4 or s4=4) and a(x,y)=2 then
    print #2,ltrim$(str$(k\2));" Lose"
    f=1
    exit for
  end if
  s1=0:s2=0:s3=0:s4=0   
next k
if f=0 then print #2,"Draw"
close
end