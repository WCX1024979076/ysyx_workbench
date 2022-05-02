BUILD_DIR = ./vsrc
OBJ_DIR = ./obj_dir
mill = ./mill/mill
TOPNAME = Main
CSRCNAME = main
VSRCNAME = Main
IMG = ""
CSRCDIRS = ./csrc
VSRCDIRS = ./vsrc
CSRC = $(foreach dir, $(CSRCDIRS), $(wildcard $(dir)/*.cpp))
VSRC = $(foreach dir, $(VSRCDIRS), $(wildcard $(dir)/*.v))


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

clean_vsrc:
	-rm -rf $(BUILD_DIR)

clean_obj:
	-rm -rf $(OBJ_DIR)

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator --trace --cc --exe $(CSRC) ./vsrc/$(VSRCNAME).v -I $(VSRC) -CFLAGS -fpermissive  -CFLAGS -I -CFLAGS $$NPC_HOME/csrc/ -LDFLAGS -ldl -Wno-fatal
	make -j -C ./obj_dir/ -f V$(TOPNAME).mk V$(TOPNAME) 
	./obj_dir/V$(TOPNAME)	$(IMG)
	# gtkwave waveform.vcd

run:
	./obj_dir/V$(TOPNAME) $(IMG)

.PHONY: test verilog help compile bsp reformat checkformat clean_vsrc clean_obj sim run

include ../Makefile
