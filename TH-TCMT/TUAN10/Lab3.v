module adder(a,b,c,s,cout);
input a,b,c;
output s,cout;
xor #1
g1(w1,a,b),
g2(s,w1,c);
and #1
g3(w2,c,b),
g4(w3,c,a),
g5(w4,a,b);
or #1
g6(cout,w2,w3,w4);
endmodule


module sixteenbitAdder(x,y,s,cout,cin);
input [15:0] x,y;
output [15:0] s;
input cin;
output cout;
wire [15:0] c;
 adder f0 (x[0],y[0],cin,s[0],c[0]);
 adder f1 (x[1],y[1],c[0],s[1],c[1]);
 adder f2 (x[2],y[2],c[1],s[2],c[2]);
 adder f3 (x[3],y[3],c[2],s[3],c[3]);
 adder f4 (x[4],y[4],c[3],s[4],c[4]);
 adder f5 (x[5],y[5],c[4],s[5],c[5]);
 adder f6 (x[6],y[6],c[5],s[6],c[6]);
 adder f7 (x[7],y[7],c[6],s[7],c[7]);
 adder f8 (x[8],y[8],c[7],s[8],c[8]);
 adder f9 (x[9],y[9],c[8],s[9],c[9]);
 adder f10 (x[10],y[10],c[9],s[10],c[10]);
 adder f11 (x[11],y[11],c[10],s[11],c[11]);
 adder f12 (x[12],y[12],c[11],s[12],c[12]);
 adder f13 (x[13],y[13],c[12],s[13],c[13]);
 adder f14 (x[14],y[14],c[13],s[14],c[14]);
 adder f15 (x[15],y[15],c[14],s[15],cout);
endmodule