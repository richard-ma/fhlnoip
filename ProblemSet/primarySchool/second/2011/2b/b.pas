program b;
var
	a: array[1..50]of integer;
	p, max, n, i, x: integer;
begin
	assign(input, 'b.in');
	reset(input);
	assign(output, 'b.out');
	rewrite(output);
	read(n);
	for i:=1 to n do a[i] := 0;
	max := 0;
	for i:=1 to n do begin
		read(x);
		inc(a[x]);
		if max<a[x] then begin
			max := a[x];
			p := x;
		end;
	end;
	for i:=1 to n do
		if (a[i]=max) and (i<>p) then p:=0;
	writeln(p);
	close(input);
	close(output);
end.
