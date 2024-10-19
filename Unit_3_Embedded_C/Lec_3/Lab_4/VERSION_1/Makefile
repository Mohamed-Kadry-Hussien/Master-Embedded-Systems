#@Copyrights : Mahmamed Kadry Hussien

#======================================================================================
CC=arm-none-eabi-
CFLAGS=-gdwarf-2 -mcpu=cortex-m3 -mthumb
INCS=-I .
LIBS=
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
AS=$(wildcard *.s)
AS_OBJ=$(AS:.s=.o)
LINKER =$(wildcard *.ld)
#--------------------------------------------------------------------------------------
ProjectName  =Learn-in-Depth-Cortex-M3
Copyrights   =Mohamed_Kadry
Board        =STM32F103C8T6
Arm_Processor=Cortex-M3
#--------------------------------------------------------------------------------------

all: $(ProjectName).bin
	@echo -e "ProjectName : " $(ProjectName)
	@echo -e "Copyrights : " $(Copyrights)
	@echo -e "Board : " $(Board)
	@echo -e "Arm_Processor : " $(Arm_Processor)

#--------------------------------------------------------------------------------------
%.o: %.c
	$(CC)gcc.exe -c $(CFLAGS) $(INCS) $< -o $@

#--------------------------------------------------------------------------------------

%.o: %.s
	$(CC)as.exe $(CFLAGS) $< -o $@

#--------------------------------------------------------------------------------------

$(ProjectName).elf: $(OBJ) $(AS_OBJ)
	$(CC)ld.exe -T $(LINKER) $(INCS) $(OBJ) -Map=Map_File.map -o $@

#--------------------------------------------------------------------------------------

$(ProjectName).bin: $(ProjectName).elf
	$(CC)objcopy.exe -O binary $< $@

#--------------------------------------------------------------------------------------

clean: 
	rm *.elf *.bin

clean_all: 
	rm *.o *.elf *.bin
	@echo "================= It is been Cleaned ================="



#--------------------------------------------------------------------------------------