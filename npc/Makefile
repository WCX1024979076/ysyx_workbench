BUILD_DIR = ./vsrc
mill = ./mill/mill
TOPNAME = Main
CSRCNAME = main
VSRCNAME = Main
IMG = ""
CSRCDIR = ./csrc
VSRCDIR = ./csrc
CSRC = $(foreach dir, $(CSRCDIR), $(wildcard $(dir)/*.cpp))
VSRC = $(foreach dir, $(VSRCDIR), $(wildcard $(dir)/*.v))

all:
	echo $(CSRC)
	echo $(VSRC)

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

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator --trace --cc --exe ./csrc/$(CSRCNAME).cpp ./csrc/mem.cpp ./csrc/difftest.cpp ./vsrc/$(VSRCNAME).v -I ./vsrc/Mem.v ./vsrc/Difftest.v ./vsrc/Ebreak.v   -CFLAGS -fpermissive  -CFLAGS -I -CFLAGS $$NPC_HOME/csrc/ -LDFLAGS -ldl -Wno-fatal
	make -j -C ./obj_dir/ -f V$(TOPNAME).mk V$(TOPNAME) 
	./obj_dir/V$(TOPNAME)	$(IMG)
	# gtkwave waveform.vcd

run:
	./obj_dir/V$(TOPNAME) $(IMG)

include ../Makefile
