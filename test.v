`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:07:55 12/11/2021
// Design Name:   kenijishuqi
// Module Name:   D:/szdl/kenijishuqi/test.v
// Project Name:  kenijishuqi
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: kenijishuqi
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg mr;
	reg load;
	reg en;
	reg up_down;
	reg clk;
	reg [3:0] d;

	// Outputs
	wire [3:0] q;
	wire co;

	// Instantiate the Unit Under Test (UUT)
	kenijishuqi uut (
		.mr(mr), 
		.load(load), 
		.en(en), 
		.up_down(up_down), 
		.clk(clk), 
		.d(d), 
		.q(q), 
		.co(co)
	);

	initial begin
		// Initialize Inputs
		mr = 1;
		load = 0;
		en = 0;
		up_down = 0;
		clk = 0;
		d = 0;

		// Wait 100 ns for global reset to finish
		#100;
		mr = 0;
		load = 0;
		en = 0;
		up_down = 0;
		d = 4'b0001;
		
		#100;
		mr = 0;
		load = 1;
		en = 0;
		up_down = 0;
		d = 4'b0001;
		
		#100;
		mr = 0;
		load = 0;
		en = 1;
		up_down = 0;
		d = 4'b0000;

		#100;
		mr = 0;
		load = 1;
		en = 1;
		up_down = 0;
		d = 4'b0000;
		// Wait 100 ns for global reset to finish
		#100;
      mr = 0;
		load = 1;
		en = 1;
		up_down = 0;
		d = 4'b0000;
		// Wait 100 ns for global reset to finish
		#100;
		mr = 0;
		load = 1;
		en = 1;
		up_down = 0;
		d = 4'b0000;
		// Wait 100 ns for global reset to finish
		#100;
		mr = 0;
		load = 1;
		en = 1;
		up_down = 0;
		d = 4'b0000;
		// Wait 100 ns for global reset to finish
		#100;
		mr = 0;
		load = 1;
		en = 1;
		up_down = 0;
		d = 4'b0000;
		// Wait 100 ns for global reset to finish
		#100;
		mr = 0;
		load = 1;
		en = 1;
		up_down = 0;
		d = 4'b0000;
		// Wait 100 ns for global reset to finish
		#100;
		mr = 0;
		load = 1;
		en = 1;
		up_down = 0;
		d = 4'b0000;
		// Wait 100 ns for global reset to finish
		#100;
		mr = 0;
		load = 0;
		en = 1;
		up_down = 1;
		d = 4'b1111;
		// Wait 100 ns for global reset to finish
		#100;
		mr = 0;
		load = 1;
		en = 1;
		up_down = 1;
		d = 4'b0000;
		// Wait 100 ns for global reset to finish
		#100;
		mr = 0;
		load = 1;
		en = 1;
		up_down = 1;
		d = 4'b0000;
		// Wait 100 ns for global reset to finish
		#100;
		mr = 0;
		load = 1;
		en = 1;
		up_down = 1;
		d = 4'b0000;
		// Wait 100 ns for global reset to finish
		#100;
		mr = 0;
		load = 1;
		en = 1;
		up_down = 1;
		d = 4'b0000;
		// Wait 100 ns for global reset to finish
		#100;
		mr = 0;
		load = 1;
		en = 1;
		up_down = 1;
		d = 4'b0000;
		// Wait 100 ns for global reset to finish
		#100;
		mr = 0;
		load = 1;
		en = 1;
		up_down = 1;
		d = 4'b0000;
		// Wait 100 ns for global reset to finish
		#100;
		mr = 0;
		load = 1;
		en = 1;
		up_down = 1;
		d = 4'b0000;
		// Wait 100 ns for global reset to finish
		#100;
		mr = 0;
		load = 1;
		en = 1;
		up_down = 1;
		d = 4'b0000;
		// Wait 100 ns for global reset to finish
		#100;
		mr = 0;
		load = 1;
		en = 0;
		up_down = 1;
		d = 4'b0000;
		// Wait 100 ns for global reset to finish
		#100;
		mr = 1;
		load = 0;
		en = 0;
		up_down = 1;
		d = 4'b0000;
		// Wait 100 ns for global reset to finish
		#100;
		// Add stimulus here

	end
      always #20 begin clk = ~clk; end
endmodule

