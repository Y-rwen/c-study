#pragma once

#include<stdio.h>
#include<string.h>
#include<stdlib.h>



int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int j = 0;
	for (i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) == 1)
			j++;
	}
	printf("%d", j);

	return 0;

}