program q1094;
var
    i, n, ans, t: longint;
    a: array[1..3] of longint;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    read(n);

    for i:=1 to 3 do
    begin
        a[i] := n mod 10;
        n := n div 10;
    end;

    if (a[1] < a[2]) then
    begin
        t := a[1]; a[1] := a[2]; a[2] := t;
    end;
    if (a[1] < a[3]) then
    begin
        t := a[1]; a[1] := a[3]; a[3] := t;
    end;
    if (a[2] < a[3]) then
    begin
        t := a[2]; a[2] := a[3]; a[3] := t;
    end;

    ans := 0;
    for i:=1 to 3 do ans := ans * 10 + a[i];

    writeln(ans);

    close(input);
    close(output);
end.
