/*Astroshark Labs Testbox v0.2.3*/
/*Created by MrSkee*/
/*Astroshark Labs Testbox code is copyrighted by Astroshark Labs
*and cannot be used or redistributed without explicit permission from Astroshark Labs*/
/*Copyright (c) 2016 Astroshark Labs*/
/*Astroshark Labs is Copyright (c) by MrSkee, All Rights Reserved*/

#include <stdio.h>
#include "initialize.h"

int main(int argc, char* args[]) {
	int debug = 0;
	initialize(&debug);
	if (debug != 0)
		return debug;
	return 0;
}