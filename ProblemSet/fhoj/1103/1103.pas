program q1103;
var
    i, j: longint;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    for i:=1 to 4 do
    begin
        for j:=1 to 9 do
            write('*');
        writeln;
    end;

    close(input);
    close(output);
end.
