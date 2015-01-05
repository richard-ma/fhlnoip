program q1063;
var
    h, f:integer;
    t, j:byte;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    readln(h, f);

    t := (f - h * 2) div 2;
    j := h - t;

    writeln(j, ' ':6, t);

    close(input);
    close(output);
end.
