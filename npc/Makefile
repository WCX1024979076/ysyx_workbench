BUILD_DIR = ./vsrc
mill = ./mill/mill
TOPNAME = top

test:
	$(mill) -i __.test

verilog:
	$(call git_commit, "generate verilog")
	mkdir -p $(BUILD_DIR)
	$(mill)  -i __.test.runMain Elaborate -td $(BUILD_DIR)

help:
	$(mill)  -i __.test.runMain Elaborate --help

compile:
	$(mill)  -i __.compile

bsp:
	$(mill)  -i mill.bsp.BSP/install

reformat:
	$(mill)  -i __.reformat

checkformat:
	$(mill)  -i __.checkFormat

clean:
	-rm -rf $(BUILD_DIR)

.PHONY: test verilog help compile bsp reformat checkformat clean

run:
	verilator --trace --cc --exe ./csrc/$(TOPNAME).cpp ./vsrc/$(TOPNAME).v 
	make -j -C ./obj_dir/ -f V$(TOPNAME).mk V$(TOPNAME)
	./obj_dir/V$(TOPNAME)
	
sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	gtkwave waveform.vcd

include ../Makefile
