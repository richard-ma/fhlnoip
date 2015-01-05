program way;
var
    map: array[1..32, 1..32] of longint;
    i, j, m, n: integer;
begin
    assign(input, 'way.in');
    assign(output, 'way.out');
    reset(input);
    rewrite(output);

    readln(m, n);

    for i:=1 to m do map[i][1] := 1;
    for i:=1 to n do map[1][i] := 1;

    for i:=2 to m do begin
        for j:=2 to n do begin
            map[i][j] := map[i-1][j] + map[i][j-1];
        end;
    end;

    writeln(map[m][n]);

    close(input);
    close(output);
end.
