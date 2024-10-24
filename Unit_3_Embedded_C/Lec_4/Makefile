#******************Makefile******************#
CFLAGS= -mcpu=cortex-m4 -gdwarf-2 -g -mthumb
CC    =arm-none-eabi-
INCS  = -I .
LIBS  = 
Map_File = -Map=Map_file.map
SRC   = $(wildcard *.c)
OBJ   = $(SRC:.c=.o)
AS    = $(wildcard *.s)
ASOBJ =$(AS:.s=.o)
LINKER =$(wildcard *.ld)



ProjectName  =Learn-in-Depth-Cortex-M4
Copyrights   =Mohamed_Kadry
Board        =Tiva_C
Arm_Processor=Cortex-M4

all : $(ProjectName).bin
	@echo -e "Build is Done"
	@echo -e "ProjectName : " $(ProjectName)
	@echo -e "Copyrights : " $(Copyrights)
	@echo -e "Board : " $(Board)
	@echo -e "Arm_Processor : " $(Arm_Processor)

$(ProjectName).bin : $(ProjectName).elf
	$(CC)objcopy.exe -O binary $< $@	

$(ProjectName).elf : $(OBJ) $(ASOBJ)
	$(CC)ld.exe -T  $(LINKER) $(OBJ) $(ASOBJ) $(INCS) $(LIBS) $(Map_File)  -o $@ 
	cp $(ProjectName).elf  $(ProjectName).axf

%.o : %.c
	$(CC)gcc.exe $(INCS)  $(CFLAGS) -c $< -o $@

%.o : %.s
	$(CC)as.exe $(CFLAGS) $<  -o $@
	
clean_all:
	rm *.o *.elf *.bin *.axf *.map
		@echo "================= It is been deleted ================="

clean:
	rm *.elf *.bin