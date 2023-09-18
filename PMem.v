`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:23:03 05/14/2023 
// Design Name: 
// Module Name:    PMem 
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
module PMem(
	input [3:0] addr,
	output [8:0] instr
    );

	reg [8:0] prog_mem [0:15];
	
	initial begin
		$readmemb("program2", prog_mem);
	end
	
	assign instr = prog_mem[addr];

endmodule
