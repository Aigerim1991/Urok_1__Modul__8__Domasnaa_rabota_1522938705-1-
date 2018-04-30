#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <math.h>
#include "Header.h"

void MaxMinBigCityLife(char *one, char *two, char *three)
{
	char *max;
	char *min;
	if (strlen(one) > strlen(two) && strlen(one) > strlen(three))
		max = one;
	else if (strlen(two) > strlen(one) && strlen(two) > strlen(three))
		max = two;
	else if (strlen(three) > strlen(one) && strlen(three) > strlen(two))
		max = three;
	if (strlen(one) < strlen(two) && strlen(one) < strlen(three))
		min = one;
	else if (strlen(two) < strlen(one) && strlen(two) < strlen(three))
		min = two;
	else if (strlen(three) < strlen(one) && strlen(three) < strlen(two))
		min = three;
	if (strlen(one) == strlen(two) && strlen(one) == strlen(three))
		printf("Название равны между собой.\n");
	else
		printf("Самое длинное название - %s, самое короткое название- %s\n", max, min);

}
