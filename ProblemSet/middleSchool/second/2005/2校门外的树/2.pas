program tree;
var
    l, m, s, e, i, j, ans: longint;
    map: array[0..10000] of longint;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    readln(l, m);
    for i:=1 to m do
        map[i] := 0;

    for i:=1 to m do
    begin
        readln(s, e);
        for j:=s to e do
            map[j] := 1;
    end;

    ans := 0;
    for i:=0 to l do
        if (map[i] = 0) then
            inc(ans);

    writeln(ans);

    close(input);
    close(output);
end.
