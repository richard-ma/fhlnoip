program q1064;
var
    h, f, b, t:integer;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    readln(h, f);

    t := f - h * 2;
    b := h - t;

    writeln(b, ' ', t);

    close(input);
    close(output);
end.
