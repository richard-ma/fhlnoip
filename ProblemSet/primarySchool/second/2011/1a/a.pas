program a;
var
	n, m: longint;
	sum, tmp, i: longint;
begin
	assign(input, 'a.in');
	reset(input);
	assign(output, 'a.out');
	rewrite(output);
	readln(n, m);
	sum := 0;
	for i:=1 to n do begin
		read(tmp);
		inc(sum, tmp);
	end;
	for i:=1 to m do begin
		read(tmp);
		dec(sum, tmp);
	end;
	if sum=0 then writeln(0);
	if sum>0 then writeln(1);
	if sum<0 then writeln(2);
	close(input);
	close(output);
end.
