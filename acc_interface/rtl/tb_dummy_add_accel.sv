
`timescale 1ns/1ps

module tb_dummy_add_accel;

    logic        clk_i;
    logic        rst_ni;
    logic        start_i;
    logic [31:0] operand_a_i;
    logic [31:0] operand_b_i;

    logic        busy_o;
    logic        done_o;
    logic [31:0] result_o;

    // Instantiate the accelerator
    dummy_add_accel dut (
        .clk_i       (clk_i),
        .rst_ni      (rst_ni),
        .start_i     (start_i),
        .operand_a_i (operand_a_i),
        .operand_b_i (operand_b_i),
        .busy_o      (busy_o),
        .done_o      (done_o),
        .result_o    (result_o)
    );

    // Clock generation
    always #5 clk_i = ~clk_i;

    initial begin
        // Initialize testbench signals
        clk_i       = 1'b0;
        rst_ni      = 1'b0;
        start_i     = 1'b0;
        operand_a_i = 32'd0;
        operand_b_i = 32'd0;

        // Apply reset
        #12;
        rst_ni = 1'b1;

        // -----------------------------
        // TEST 1: 10 + 20 = 30
        // -----------------------------
        @(negedge clk_i);
        operand_a_i = 32'd10;
        operand_b_i = 32'd20;
        start_i     = 1'b1;

        @(negedge clk_i);
        start_i = 1'b0;

        if (busy_o !== 1'b1)
            $fatal(1, "TEST 1 FAILED: busy_o not asserted");

        wait (done_o == 1'b1);

        if (result_o !== 32'd30)
            $fatal(1, "TEST 1 FAILED: result=%0d", result_o);

        $display("TEST 1 PASSED: 10 + 20 = %0d", result_o);

        // -----------------------------
        // TEST 2: 100 + 200 = 300
        // -----------------------------
        @(negedge clk_i);
        operand_a_i = 32'd100;
        operand_b_i = 32'd200;
        start_i     = 1'b1;

        @(negedge clk_i);
        start_i = 1'b0;

        if (busy_o !== 1'b1)
            $fatal(1, "TEST 2 FAILED: busy_o not asserted");

        wait (done_o == 1'b1);

        if (result_o !== 32'd300)
            $fatal(1, "TEST 2 FAILED: result=%0d", result_o);

        $display("TEST 2 PASSED: 100 + 200 = %0d", result_o);

        // All tests completed
        $display("ALL TESTS PASSED");
        $finish;
    end

    // Prevent the simulation from hanging indefinitely
    initial begin
        #1000;
        $fatal(1, "TIMEOUT: Simulation did not finish");
    end

endmodule
