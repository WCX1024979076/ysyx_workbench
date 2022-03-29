module m_mux21(a,b,s,y);
    input a,b,s;
    output y;

    assign y=(~s&a)|(s&b);

    endmodule
