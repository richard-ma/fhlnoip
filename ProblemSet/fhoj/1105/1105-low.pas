program q1105;
var
    ans, i, j, k: longint;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    ans := 0;
    for i:=1 to 7 do
        for j:=1 to 7 do
            for k:=1 to 7 do
                if ((i <> j) and (j <> k) and (i <> k)) then inc(ans);
    writeln(ans);

    close(input);
    close(output);
end.
