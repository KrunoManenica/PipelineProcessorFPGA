`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:22:59 05/28/2023 
// Design Name: 
// Module Name:    Processor 
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
module Processor(
	input clk, rst
    );
	 
	parameter LOAD = 3'b010, ADD = 3'b001, STORE = 3'b011, LOADC = 3'b100;
	reg [3:0] PC = 0;
	wire [3:0] acc, dr_out;
	wire [8:0] ir1_wire;
	reg data_WE = 0;
	reg [3:0] OP1, OP2, ACC, dr_in;
	reg [8:0] IR1, IR2, IR3;
	reg [3:0] REG0, REG1, REG2, REG3;
	
	ALU alu_unit(.operand1(OP1), .operand2(OP2), .mode(IR2[8:6]), .out(acc));
	PMem prog_mem(.addr(PC), .instr(ir1_wire));
	DMem data_mem(.WE(data_WE), .clk(clk), .addr(ACC), .DI(dr_in), .DO(dr_out));
	
	// FETCH
	always@(posedge clk) begin
		if (rst)
			PC = 0;
		if (PC < 15) // after PC hits 15, process stops to verify results
			PC <= PC + 1;
		IR1 <= ir1_wire;
	end
	
	// DECODE
	always@(posedge clk) begin
		case(IR1[8:6])
			LOAD : 	begin
							OP1 <= IR1[3:0];
							IR2 <= IR1;
						end
			STORE : 	begin
							OP1 <= IR1[3:0];
							IR2 <= IR1;
						end
			LOADC : 	begin
							OP1 <= IR1[3:0];
							IR2 <= IR1;
						end
			ADD : 	begin
							case(IR1[3:2]) // OP1 <= REG[IR1[3:2]];
								0 : OP1 <= REG0;
								1 : OP1 <= REG1;
								2 : OP1 <= REG2;
								3 : OP1 <= REG3;
							endcase
							case(IR1[1:0]) // OP2 <= REG[IR1[1:0]];
								0 : OP2 <= REG0;
								1 : OP2 <= REG1;
								2 : OP2 <= REG2;
								3 : OP2 <= REG3;
							endcase
							IR2 <= IR1;
						end
			default : IR2 <= IR1;
		endcase
	end
	
	// EXECUTE
	always@(posedge clk) begin
		ACC <= acc;
		IR3 <= IR2;
		if(IR2[8:6] == STORE) begin
			case(IR2[5:4]) // dr_in <= REG[IR3[5:4]];
				0 : dr_in <= REG0;
				1 : dr_in <= REG1;
				2 : dr_in <= REG2;
				3 : dr_in <= REG3;
			endcase
			data_WE <= 1;
		end
	end
	
	// STORE
	always@(posedge clk) begin
		case(IR3[8:6])
			LOAD : 	begin
							case(IR3[5:4]) // REG[IR3[5:4]] <= dr_out;
								0 : REG0 <= dr_out;
								1 : REG1 <= dr_out;
								2 : REG2 <= dr_out;
								3 : REG3 <= dr_out;
							endcase
						end
			STORE : 	begin
							//case(IR3[5:4]) // dr_in <= REG[IR3[5:4]];
							//	0 : dr_in <= REG0;
							//	1 : dr_in <= REG1;
							//	2 : dr_in <= REG2;
							//	3 : dr_in <= REG3;
							//endcase
							data_WE <= 0;
						end
			ADD : 	begin
							case(IR3[5:4]) // REG[IR3[5:4]] <= ACC;
								0 : REG0 <= ACC;
								1 : REG1 <= ACC;
								2 : REG2 <= ACC;
								3 : REG3 <= ACC;
							endcase
						end
			LOADC : 	begin
							case(IR3[5:4]) // REG[IR3[5:4]] <= ACC;
								0 : REG0 <= ACC;
								1 : REG1 <= ACC;
								2 : REG2 <= ACC;
								3 : REG3 <= ACC;
							endcase
						end
			default : begin
						end
		endcase
	end


endmodule
