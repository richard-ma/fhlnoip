program q1096;
var
    score: double;
begin
    assign(input, '');
    assign(output, '');
    reset(input);
    rewrite(output);

    read(score);

    if (score >= 85) then
        writeln('A')
    else if ((score >= 60) and (score < 85)) then
        writeln('B')
    else  
        writeln('C');

    close(input);
    close(output);
end.
