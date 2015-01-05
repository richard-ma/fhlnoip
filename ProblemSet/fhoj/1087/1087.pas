program q1087;
var
    i, n, t1, t2, ans: longint;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    readln(n);

    if (n = 1) then ans := 1;
    if (n = 2) then ans := 2;

    t1 := 1; t2 := 2;
    for i:=3 to n do
    begin
        ans := t1 + t2;
        t1 := t2;
        t2 := ans;
    end;

    writeln(ans);

    close(input);
    close(output);
end.
