/***************Linker_Script***************/
ENTRY(reset)
MEMORY
{
	Mem(rwx) :ORIGIN =0x00000000 ,LENGTH =64M
}

SECTIONS
{
    . = 0x010000;
	.startup . :
	{
	   startup.o(.text)
	}>Mem
	.text :
	{
	   *(.text)
	}>Mem
	.data :
	{
	   *(.data)
	}>Mem
	.bss :
	{
	   *(.bss)
	}>Mem
	. = . + 0x1000;
	stack_top = . ;
}
