`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:09:06 05/14/2023 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
	input [3:0] operand1, operand2,
	input [2:0] mode,
	// TODO: overflow flag
	output [3:0] out
    );

	parameter LOAD = 3'b010, ADD = 3'b001, STORE = 3'b011, LOADC = 3'b100;
	reg [3:0] alu_out;
	
	always @(*) begin
		case(mode)
			3'b000 : alu_out = 0;
			STORE : alu_out = operand1;
			LOAD : alu_out = operand1;
			LOADC : alu_out = operand1;
			ADD : alu_out = operand1 + operand2;
			default : alu_out = 0;
		endcase
	end
	
	assign out = alu_out;

endmodule
