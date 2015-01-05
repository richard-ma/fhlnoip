program q1098;
var
    i: longint;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    for i:=20 downto 1 do
        writeln(i);

    close(input);
    close(output);
end.
