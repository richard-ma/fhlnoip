program q1108;
var
    i: longint;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    for i:=100 to 200 do
        if (i mod 2 = 1) then
            writeln(i);

    close(input);
    close(output);
end.
