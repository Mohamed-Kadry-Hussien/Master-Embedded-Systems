/***************Linker_Script***************/
/*****************Cortex-M3*****************/

MEMORY
{
	Flash(rx) : ORIGIN  =0x08000000  ,LENGTH =128k
	SRAM(rwx)  : ORIGIN  =0x20000000  ,LENGTH =20k
}

SECTIONS
{
   .text :
   {
      *(.vectors*)
      *(.text*)
   }>Flash

   .data :
   {
      *(.data*)
   }>Flash

   .rodata :
   {
      *(.rodata*)
   }>Flash

   .bss :
   {
      *(.bss*)
   }>SRAM

}
