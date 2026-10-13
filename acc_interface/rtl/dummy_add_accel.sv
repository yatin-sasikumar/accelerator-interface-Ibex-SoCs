`timescale 1ns/1ps

module dummy_add_accel (
    input  logic        clk_i,
    input  logic        rst_ni,

    input  logic        start_i,
    input  logic [31:0] operand_a_i,
    input  logic [31:0] operand_b_i,

    output logic        busy_o,
    output logic        done_o,
    output logic [31:0] result_o
);

    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            busy_o   <= 1'b0;
            done_o   <= 1'b0;
            result_o <= 32'b0;
        end else begin
            done_o <= 1'b0;

            if (start_i && !busy_o) begin
                result_o <= operand_a_i + operand_b_i;
                busy_o   <= 1'b1;
            end else if (busy_o) begin
                busy_o <= 1'b0;
                done_o <= 1'b1;
            end
        end
    end

endmodule
