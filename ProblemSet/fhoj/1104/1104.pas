program q1104;
var
    i, j: longint;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    for i:=1 to 9 do
    begin
        for j:=1 to i do
        begin
            if (j <> 1) then write(' ');
            write(i, '*', j, '=', i*j);
        end;
        writeln;
    end;

    close(input);
    close(output);
end.
