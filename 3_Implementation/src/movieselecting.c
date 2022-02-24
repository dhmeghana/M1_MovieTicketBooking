#include "function.h"

int movieselect(void)
{
	int i;
	printf("\t\t\tMovie Name\n");
	printf("\t\t\t-------------------------------------\n");
	printf("\t\t\tpress 1 for Spider Man\n\n");
	printf("\t\t\tpress 2 for Money Heist\n\n");
	printf("\t\t\tpress 3 for Tenet\n");
	scanf("%d",&i);
	return i;
}