program q1065;
var
    x, ans: longint;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    readln(x);

    if (x <= 100) then ans := x * 80 else ans := x * 50;

    writeln(ans);

    close(input);
    close(output);
end.
