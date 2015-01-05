program p67;
var
    ans,n,i,k:longint;
    num:array[1..20] of longint;
    store:array[1..20] of boolean;
     
function check(x:longint):boolean;
var
i:longint;
begin
    if x=1 then
        exit(false);
    if x=2 then
        exit(true);
    if x=3 then
        exit(true);
    for i:=2 to trunc(sqrt(x)) do
        if (x mod i)=0 then
            exit(false);
exit(true);
end;
                                             
procedure search(z,total,q:longint);
var
    s:longint;
begin
    if q=k then
    begin
        if check(total) then
        begin
            writeln(total);
            inc(ans);
            exit;
        end;
    end;
    for s:=z+1 to n do
    begin
        if not(store[s]) then
            begin
                store[s]:=true;
                search(s,total+num[s],q+1);
                store[s]:=false;
            end;
    end;
end;
 
begin
    readln(n,k);
    for i:=1 to n do
        read(num[i]);
        readln;
           
    for i:=1 to n do
    begin
        store[i]:=true;
        search(i,num[i],1);
        store[i]:=false;
    end;
    writeln(ans);
end.
