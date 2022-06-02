//adder & subber 4-bit complement
module addsub4 (
    input [3:0] a,
    input [3:0] b,
    input sel,
    output [3:0] result,
    output overflow,
    output zero,
    output carry
);

/* verilator lint_off WIDTH */
assign {carry,result} = sel? (a+(~b+1)):(a+b) ; 
assign overflow = (a[3]==b[3]) & (result[3] != a[3]);
assign zero = ~(|result);   
    

endmodule
