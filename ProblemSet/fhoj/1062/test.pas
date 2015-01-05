program test;
var
    i:longint;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    writeln('ab':4, 'abcde':4, '*');
    for i:=1 to 9 do
        write(i);
    writeln;

    close(input);
    close(output);
end.
