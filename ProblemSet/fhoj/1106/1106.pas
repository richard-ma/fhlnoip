program q1106;
var
    n, flg, i: longint;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    readln(n);

    flg := 1;
    for i:=2 to trunc(sqrt(n)) do
        if (n mod i = 0) then
            flg := 0;

    if (flg = 1) then
        writeln('Yes')
    else
        writeln('No');

    close(input);
    close(output);
end.
