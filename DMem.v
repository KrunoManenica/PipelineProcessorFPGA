`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:47:49 05/14/2023 
// Design Name: 
// Module Name:    DMem 
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
module DMem(
	input WE, clk,
	input [3:0] addr, DI,
	output [3:0] DO
    );

	reg [3:0] data_mem [0:15];
	
	initial begin
		$readmemb("initialData.dat", data_mem);
	end
	
	always @(posedge clk) begin
		if (WE)
			data_mem[addr] <= DI;
	end
	
	assign DO = data_mem[addr];

endmodule
