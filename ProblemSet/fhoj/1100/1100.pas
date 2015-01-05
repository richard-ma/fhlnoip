program q1100;
var
    i, ans: longint;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    ans := 0;
    for i:=1 to 100 do
        ans := ans + i;

    writeln(ans);

    close(input);
    close(output);
end.
