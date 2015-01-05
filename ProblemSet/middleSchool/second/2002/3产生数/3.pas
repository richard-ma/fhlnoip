program NOIPC3;
var st:string;
    k,ilength:integer;
    date1,date2:array[1..15] of shortint;
    date:array[1..30] of shortint;
    num:array[0..9] of integer;

procedure Init;
var s:string;i:integer;
begin
    readln(s);
    st:=copy(s,1,pos(' ',s)-1);
    delete(s,1,pos(' ',s));
    val(s,k);
    for i:=1 to k do
    begin
        read(date1[i]);
        read(date2[i]);
    end;
    ilength:=length(st);
    for i:=1 to ilength do
        val(st[i],date[i]);
end;

procedure search;
var i,j,p1,p2:integer;
use:array[0..9] of boolean;
p:array[1..10] of shortint;
begin
    for i:=0 to 9 do
    begin
        fillchar(use,sizeof(use),false);
        use[i]:=true;
        p1:=1;
        p2:=1;
        p[1]:=i;
        while p1<=p2 do
        begin
            for j:=1 to k do
                if date1[j]=p[p1] then
                    if not use[date2[j]] then
                    begin
                        use[date2[j]]:=true;
                        inc(p2);
                        p[p2]:=date2[j];
                    end;
                    inc(p1);
        end;
        num[i]:=p2;
    end;
end;

procedure Printf;
var i:integer;
ans:extended;
begin
    ans:=1;
    for i:=1 to ilength do
        ans:=ans*num[date[i]];
    writeln(ans:0:0);
end;

begin
    init;
    search;
    printf;
end.
