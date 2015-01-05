program q1062;
var
    a, b, c, n: integer;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    readln(n);
    a := n div 3;
    b := n div 3;
    c := n div 3;

    a := a div 2;
    b := b div 2;
    c := 24 - a - b;

    a := a div 2;
    c := c div 2;
    b := 24 - a - c;

    b := b div 2;
    c := c div 2;
    a := 24 - b - c;

    writeln(a, ' ':4, b, ' ':4, c);

    close(input);
    close(output);
end.
