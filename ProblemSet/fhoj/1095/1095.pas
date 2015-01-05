program q1095;
var
    p, x: longint;
    ans: double;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    read(x);

    p := trunc(x / 1000);
    if (p > 9) then p := 10;
    case p of
        0               : ans := 0;
        1, 2, 3, 4      : ans := p * 0.02;
        5, 6, 7, 8, 9   : ans := p * 0.03;
        10              : ans := p * 0.05;
    end;

    writeln(ans:0:2);

    close(input);
    close(output);
end.
