program q1086;
var
    i, flg, j, k, n: longint;
    s: string;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    readln(n);

    for k:=1 to n do
    begin
        readln(s);

        flg := 1;
        i := 1; j := length(s);
        while (i < j) do
        begin
            if (s[i] <> s[j]) then
            begin
                flg := 0;
                break;
            end;
            i := i+1; j := j-1;
        end;

        if (flg = 1) then
            writeln(s);
    end;

    close(input);
    close(output);
end.
