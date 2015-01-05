program q1059;
var
    s, ans: real;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    readln(s);

    ans := sqrt(s / PI);

    writeln(ans);

    close(input);
    close(output);
end.
