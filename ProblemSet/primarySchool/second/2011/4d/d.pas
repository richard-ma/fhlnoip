program d;
var
	s: string;
	ans, n, i, j, k, l: integer;
begin
	assign(input, 'd.in');
	reset(input);
	assign(output, 'd.out');
	rewrite(output);
	read(s);
	n := length(s);
	ans := 1;
	for i:=1 to n do begin
		for j:=i to n do begin
			l := j-i+1;
			for k:=0 to j-i do 
				if s[i+k]<>s[j-k] then l := 0;
			if ans<l then ans := l;
		end;
	end;
	writeln(ans);
	close(input);
	close(output);
end.
