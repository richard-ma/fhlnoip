program aplusb;
var
    a, b:integer;
begin
    assign(input, 'aplusb.in');
    assign(output, 'aplusb.out');
    reset(input);
    rewrite(output);

    readln(a, b);
    writeln(a + b);

    close(input);
    close(output);
end.
