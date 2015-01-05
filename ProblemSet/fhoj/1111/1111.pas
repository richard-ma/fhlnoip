program q1111;
var
    x, a, sum :longint;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    readln(x);

    sum := 0;
    repeat
        a := x mod 10;
        x := x div 10;
        sum := sum + a;
    until x = 0;

    if (sum mod 7 = 0) then
        writeln('Yes')
    else
        writeln('No');

    close(input);
    close(output);
end.
