export PRJ_PATH=$(shell pwd)

all:
	@echo "Write this Makefile by your self."
	
cmp:
	verilator --trace --cc --exe ./csrc/main.cpp ./vsrc/example.v 
	make -j -C ./obj_dir/ -f Vexample.mk Vexample
run:
	./obj_dir/Vexample

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	gtkwave waveform.vcd

rm :
	@rm -rf obj_dir waveform.vcd
include ../Makefile
