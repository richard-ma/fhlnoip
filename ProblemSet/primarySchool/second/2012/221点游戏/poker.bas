//本题摘自xx-064同学
open "poker.in" for input as  #1
open "poker.out" for output as #2
input #1,n
for i=1 to n
  input #1,x,y
  ans1=0
  ans2=0
  for j=1 to x
    input #1,s
    ans1=ans1+s
  next j
  for j=1 to y
    input #1,s
    ans2=ans2+s
  next j
  if ans1>21 then ans1=0
  if ans2>21 then ans2=0
  if ans1>ans2 then
    print #2,"Win" 
  elseif ans1<ans2 then
    print #2,"Lose"
  else
    print #2,"Draw"
  end if
next i
close
end