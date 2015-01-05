program q1066;
var
    a, b, c, t:longint;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    readln(a, b, c);

    if (a > b) then 
    begin
        t := a; a := b; b := t;
    end;
    if (a > c) then 
    begin
        t := a; a := c; c := t;
    end;
    if (b > c) then 
    begin
        t := b; b := c; c := t;
    end;

    writeln(a, ' ', b, ' ', c);

    close(input);
    close(output);
end.
