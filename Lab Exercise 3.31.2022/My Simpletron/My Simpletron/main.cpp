//Lab Exercise 3/31/2022
//Author: nmessa
#include "Simpletron.h"

int main()
{
	Simpletron cpu;
	cpu.Execute();
	cpu.DumpRegisters();
	cpu.DumpMemory();
	return 0;
}