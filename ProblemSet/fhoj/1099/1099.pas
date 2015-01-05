program q1099;
var
    i: longint;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    for i:=30 to 60 do
        if (i mod 2 = 0) then
            writeln(i);

    close(input);
    close(output);
end.
