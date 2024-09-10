#include <stdio.h>

int main()
{
	int no_of_sym_on_line;
	char outer_sym;
	int no_of_middle_sym;
	char inner_sym;
	int mid_pattern_flag;

	printf("Enter number of char on line [odd numbers only]: ");
	scanf("%d", &no_of_sym_on_line);

	if (no_of_sym_on_line % 2 == 0)
	{
		printf("Enter odd numbers please\n");

		return 1;
	}

	getchar();

	printf("Enter the outer symbol: ");
	scanf("%c", &outer_sym);

	printf("Enter the of char in between the line [odd numbers only]: ");
	scanf("%d", &no_of_middle_sym);

	if (no_of_middle_sym > no_of_sym_on_line - 2)
	{
		printf("Pattern not possible\n");

		return 1;
	}
	else if (no_of_middle_sym % 2 == 0)
	{
		printf("Enter odd numbers please\n");

		return 1;
	}

	getchar();

	printf("Enter the inter symbol: ");
	scanf("%c", &inner_sym);

	mid_pattern_flag = (no_of_sym_on_line - no_of_middle_sym) / 2;

	int i;

	for (i = 0; i < mid_pattern_flag; i++)
	{
		printf("%c", outer_sym);
	}
	for (i = 0; i < no_of_middle_sym; i++)
	{
		printf("%c", inner_sym);
	}
	for (i = 0; i < mid_pattern_flag; i++)
	{
		printf("%c", outer_sym);
	}

	printf("\n");

	return 0;
}
