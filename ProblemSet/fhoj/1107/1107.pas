program q1107;
var
    i: longint;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    for i:=1 to 20 do
        writeln(sqr(i));

    close(input);
    close(output);
end.
