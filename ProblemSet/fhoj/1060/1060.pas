program q1060;
var
    a, b, c, d, sum: integer;
    avg: real;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    readln(a, b, c, d);

    sum := a + b + c + d;
    avg := sum / 4;

    writeln(sum, avg);

    close(input);
    close(output);
end.
