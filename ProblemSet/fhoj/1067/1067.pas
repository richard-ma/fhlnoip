program q1067;
var
    x, ans: real;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    readln(x);

    if (x <= 1) then 
        ans := x * 1.5 
    else 
        ans := 1 * 1.5 + (x - 1) * (1.5 + 0.8);

    writeln(ans:0:2);

    close(input);
    close(output);
end.
