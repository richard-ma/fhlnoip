program q1057;
var
    a, b, ans1, ans2: longint;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    readln(a, b);
    ans1 := a div b;
    ans2 := a mod b;
    writeln(ans1, ' ', ans2);

    close(input);
    close(output);
end.
