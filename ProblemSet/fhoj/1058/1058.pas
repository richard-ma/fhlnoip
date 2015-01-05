program q1058;
var
    n, ans: longint;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    readln(n);

    ans := n * 2500;

    writeln(ans);

    close(input);
    close(output);
end.
