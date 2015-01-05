program q1097;
var
    i: longint;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    for i:=1 to 20 do
        writeln(i);

    close(input);
    close(output);
end.
