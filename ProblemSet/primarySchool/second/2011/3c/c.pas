program c;
const
	p: array[1..5]of longint = (1,5,10,20,50);
var
	i, n, ans: longint;
begin
	assign(input, 'c.in');
	reset(input);
	assign(output, 'c.out');
	rewrite(output);
	read(n);
	ans := 0;
	for i:=5 downto 1 do begin
		inc(ans, n div p[i]);
		n := n mod p[i];
	end;
	writeln(ans);
	close(input);
	close(output);
end.

