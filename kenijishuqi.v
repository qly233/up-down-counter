`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:42:09 12/11/2021 
// Design Name: 
// Module Name:    kenijishuqi 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module kenijishuqi(mr,load,en,up_down,clk,d,q,co);
	input mr,load,en,up_down,clk;
	input[3:0] d;
	output reg co;
	output reg[3:0] q;
	always@(mr or clk)
	begin
		if(mr)
		begin
			q = 4'b0000;
			co = 0;
		end
		else if(~load&&clk)
		begin
			q = d;
			co = 0;
		end
		else if(clk)
		begin
			if(up_down == 0)
			begin
				if(q == 4'b1111)
				begin
					q = 4'b0000;
					co = 0;
				end
				else
				begin
					q = q + 4'b0001;
					if(q == 4'b1111)
						co = 1;
				end
			end
			if(up_down == 1)
			begin
				if(q == 4'b0000)
				begin
					q = 4'b1111;
					co = 0;
				end
				else
				begin
					q = q - 4'b0001;
					if(q == 4'b0000)
						co = 1;
				end
			end
		end
	end

endmodule
