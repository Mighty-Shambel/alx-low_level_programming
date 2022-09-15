Task 9.txt
ማን መዳረሻ እንዳለው
A
የስርዓት ባህሪያት
ዓይነት
ጽሁፍ
መጠን
542 ባይት
ጥቅም ላይ የዋለው ማከማቻ
542 ባይት
አካባቢ
More functions, more nested loops
ባለቤት
Antony Bahati
የተቀየረው
15 ሴፕቴ 2022 በAntony Bahati
የተከፈተው
1:36 ጥዋት በእኔ
የተፈጠረው
1:51 ከሰዓት
መግለጫ የለም
ተመልካቾች ማውረድ ይችላሉ
#include <stdio.h>

/**
*main - program that prints either number
*or fizz or buzz or fizzBuzz
*
*
*Return: returns 0
*/

int main(void)
{
	int num = 1;

	while (num++ < 100)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((num % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((num % 5) == 0)
		{
			if (num != 100)
			{
				printf("Buzz ");
			}
			else
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%d ", num);
		}
	}
	printf("\n");

	return (0);
