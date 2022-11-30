Program Max;
Uses Crt;
var i, j, k, n, l : integer;
Arr : array[1..10] of integer;

Begin
     write('n = '); readln(n);
     for i:=1 to n do readln(Arr[i]);

     k:=Arr[1]; l:=0;
     for i:=2 to n do if Arr[i]>k then
     Begin
          k:=Arr[i];
          j:=i;
     End;

     for i:=1 to n do if Arr[i] = k then
     Begin
          l:=l+1;
          for j:=i to n-1 do Arr[j]:=Arr[j+1];
     End;

     k:=Arr[1];
     for i:=2 to n-l do if Arr[i]>k then
     Begin
         k:=Arr[i];
         j:=i;
     End;

     writeln('max = ', k);
     writeln('stt = ', j);
     readln
End.