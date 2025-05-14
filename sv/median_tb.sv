`timescale 1 ps / 1 ps

module median_tb();

    //input array
    logic [7:0] arr [2:0][2:0];

    //output median
    logic [7:0] med;

    //vars
    logic [7:0] sub [8:0];

    //assigns
    assign arr[0] = sub[2:0];
    assign arr[1] = sub[5:3];
    assign arr[2] = sub[8:6];

    //device under test
    median dut (
        .arr(arr),
        .med(med)
    );

    initial
    begin
        for (int i = 0; i < 9; i = i + 1) begin
            fix_position_array(i, i+1);
        end
        for (int i = 10; i <= 25; i = i + 1) begin
            rnd_position_array(i);
        end
        $stop;
    end

    //create array with fixed median task
    task fix_position_array;

        input logic[3:0] position;
        input logic[5:0] test_num;

        //task variables
        logic [3:0] i;
        logic [7:0] t_val;

        begin
            $display("\n---   test    %u   ---\n", test_num);
            for(i = 0; i < 9; i = i + 1) begin
                sub[i] = i + 1;
            end
            t_val = sub[4];
            sub[4] = sub[position];
            sub[position] = t_val;
            #5 $display("current array:[");
            for(i = 0; i < 3; i = i + 1) begin
                $display("\t[ %u, \t%u, \t%u],", arr[i][0], arr[i][1], arr[i][2]);
            end
            $display("]\ntrue median: \t%u\n", t_val);
            #5 if (t_val == med) begin
                $display("---test %u passed ---\n", test_num);
            end else begin
                $display("test %u failed;\ncurrent median: \t%u\n", test_num, med);
                $stop;
            end
        end
    endtask


    //create array with random median task
    task rnd_position_array;

        input logic[5:0] test_num;

        //task variables
        logic [3:0] i;
        logic [3:0] j;
        logic [7:0] t_val;
        logic [7:0] buff;

        begin
            $display("\n---   test    %u   ---\n", test_num);
            //create median 
            t_val = $random & 8'hFF;
            //create array
            for(i = 0; i < 4; i = i + 1) begin
                sub[i] = $urandom_range(t_val);
            end
            sub[4] = t_val;
            for(i = 5; i < 9; i = i + 1) begin
                sub[i] = $urandom_range(8'hFF, t_val);
            end
            //mix array
            for(i = 8; i != 4'hF; i = i - 1) begin
                j = ($random & 4'hF) % 9;
                buff = sub[j];
                sub[j] = sub[i];
                sub[i] = buff;
            end

            #5 $display("current array:[");
            for(i = 0; i < 3; i = i + 1) begin
                $display("\t[ %u, \t%u, \t%u],", arr[i][0], arr[i][1], arr[i][2]);
            end
            $display("]\ntrue median: \t%u\n", t_val);
            #5 if (t_val == med) begin
                $display("---test %u passed ---\n", test_num);
            end else begin
                $display("test %u failed;\ncurrent median: \t%u\n", test_num, med);
                $stop;
            end
        end
    endtask

endmodule