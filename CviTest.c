//==============================================================================
//
// Title:		CviTest
// Purpose:		A short description of the command-line tool.
//
// Created on:	6/30/2020 at 10:36:31 AM by Flex.
// Copyright:	Flex. All Rights Reserved.
//
//==============================================================================

//==============================================================================
// Include files

#include <ansi_c.h>

//==============================================================================
// Constants

//==============================================================================
// Types

//==============================================================================
// Static global variables

//==============================================================================
// Static functions

/// HIFN  Explain how to use this command-line tool.
/// HIPAR name/The name of the command-line tool.
static void usage (char *name)
{
	fprintf (stderr, "usage: %s <argument>\n", name);
	fprintf (stderr, "A short summary of the functionality.\n");
	fprintf (stderr, "    <argument>    is an argument\n");
	exit (1);
}

//==============================================================================
// Global variables

//==============================================================================
// Global functions

/// HIFN  The main entry-point function.
/// HIPAR argc/The number of command-line arguments.
/// HIPAR argc/This number includes the name of the command-line tool.
/// HIPAR argv/An array of command-line arguments.
/// HIPAR argv/Element 0 contains the name of the command-line tool.
/// HIRET Returns 0 if successful.
int main (int argc, char *argv[])
{
	//if (argc < 2 || argc > 3)
		//usage (argv[0]);
	printf("CVI_TEST\n");
	return 0;
}

