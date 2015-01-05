program program_name;
var


begin
    assign(input, 'program_name.in');
    assign(output, 'program_name.out');
    reset(input);
    rewrite(output);



    close(input);
    close(output);
end.



