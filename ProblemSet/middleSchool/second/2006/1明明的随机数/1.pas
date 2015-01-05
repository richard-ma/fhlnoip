program vijos1316;
var
    i, j, n, t, cnt: longint;
    a: array [1..100] of longint;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    read(n);

    for i:=1 to n do
    begin
        read(a[i]);
    end;

    for i:=1 to n-1 do
    begin
        for j:=i+1 to n do
        begin
            if (a[i] > a[j]) then
            begin
                t := a[i];
                a[i] := a[j];
                a[j] := t;
            end;
        end;
    end;

    cnt := 1;
    for i:=2 to n do
    begin
        if (a[i] <> a[i-1]) then inc(cnt);
    end;
    writeln(cnt);

    write(a[1]);
    for i:=2 to n do
    begin
        if (a[i] <> a[i-1]) then write(' ', a[i]);
    end;
    writeln;

    close(input);
    close(output);
end.
