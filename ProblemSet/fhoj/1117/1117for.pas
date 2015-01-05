program q1117for;
var
    i:longint;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    for i:=0 to 25 do
        writeln(chr(i + ord('A')));

    close(input);
    close(output);
end.
