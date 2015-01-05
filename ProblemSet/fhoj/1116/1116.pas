program q1116;
var
    n, s, j: longint;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    readln(n, s, j);

    if (s + j > n) then
        writeln('double')
    else
        writeln('pass');

    close(input);
    close(output);
end.
