module xorgate_tb;
wire t_y;
reg t_a, t_b;
xorgate my_gate( .a(t_a), .b(t_b), .c(t_c), .y(t_y) );
initial
begin
$monitor(t_a, t_b, t_c, t_y);
t_a = 1'b0;
t_b = 1'b0;
t_c = 1'b0;
#5
t_a = 1'b0;
t_b = 1'b0;
t_c = 1'b1;
#5
t_a = 1'b0;
t_b = 1'b1;
t_c = 1'b0;
#5
t_a = 1'b0;
t_b = 1'b1;
t_c = 1'b1;
#5
t_a = 1'b1;
t_b = 1'b0;
t_c = 1'b0;
#5
t_a = 1'b1;
t_b = 1'b0;
t_c = 1'b1;
#5
t_a = 1'b1;
t_b = 1'b1;
t_c = 1'b0;
#5
t_a = 1'b1;
t_b = 1'b1;
t_c = 1'b1;
end
endmodule