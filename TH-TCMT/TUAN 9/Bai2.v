module Odd_counter_fsm ( clk ,dout );

output [2:0] dout ;
reg [2:0] dout ;

input clk ;
wire clk ;

parameter [1:0]st1 = 0;
parameter [1:0]st2 = 0;
parameter [1:0]st3 = 0;
parameter [1:0]st4 = 0;

reg [1:0]p_state;
reg [1:0]n_state;

initial p_state = st1;
 
always @ (posedge (clk)) begin
 p_state <= n_state;
end

always @ (p_state) begin
 case (p_state)
  st1 : n_state = st2;
  st2 : n_state = st3;
  st3 : n_state = st4;
  st4 : n_state = st1; 
 endcase
end

always @ (p_state) begin
 case (p_state)
  st1 : dout = 1;
  st2 : dout = 3;
  st3 : dout = 5;
  st4 : dout = 7;
 endcase 
end

endmodule