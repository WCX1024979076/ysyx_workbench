export PRJ_PATH=$(shell pwd)
top=example
CFLAGS= -I /usr/share/verilator/include

all:
	@echo "Write this Makefile by your self."
	
cmp:
	verilator --trace --cc --exe ./csrc/$(top).cpp ./vsrc/$(top).v 
	make -j -C ./obj_dir/ -f V$(top).mk V$(top)
run:
	./obj_dir/V$(top)

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	gtkwave waveform.vcd


rm :
	@rm -rf obj_dir waveform.vcd
include ../Makefile
