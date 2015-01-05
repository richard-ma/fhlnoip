program maze;
var
    i, j, m, n: integer;
    map: array[1..50, 1..50] of integer;
begin
    assign(input, 'maze.in');
    assign(output, 'maze.out');
    reset(input);
    rewrite(output);

    readln(m, n);
    for i:= 1 to m do begin
        for j:=1 to n do begin
            read(map[i][j]);
        end;
    end;

    for i:=2 to m do map[i][1] := map[i-1][1] + map[i][1];
    for i:=2 to n do map[1][i] := map[1][i-1] + map[1][i];

    for i:=2 to m do begin
        for j:=2 to n do begin
            if (map[i-1][j] > map[i][j-1]) then map[i][j] := map[i-1][j] + map[i][j]
            else map[i][j] := map[i][j-1] + map[i][j];
        end;
    end;

    writeln(map[m][n]);

    close(input);
    close(output);
end.
