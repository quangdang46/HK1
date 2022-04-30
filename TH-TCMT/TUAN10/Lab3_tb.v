`include "Lab3.v"
module test();
wire [15:0] x,y,s;
wire cin, cout;
 testAdder testt (x,y,s,cout,cin);
 sixteenbitAdder adderr (x,y,s,cout,cin);
endmodule


module testAdder(a,b,s,cout,cin);
input [15:0] s;
input cout;
output [15:0] a,b;
output cin;
reg [15:0] a,b;
reg cin;
initial
    begin
     $monitor($time,,"a=%d, b=%d, cin=%b, s=%d, cout=%b",a,b,cin,s,cout);
     $display($time,,"a=%d, b=%d, cin=%b, s=%d, cout=%b",a,b,cin,s,cout);
     #50  a=1; b=2; cin=0; 
    end
endmodule