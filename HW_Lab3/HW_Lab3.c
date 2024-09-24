#include <stdio.h>
#include <locale.h>
#define G  6.674 * 1e-11
#define R  6.37 * 1000000
#define M  5.97 * 1e+24
void main()
{
	float h;
	float m;
	setlocale(LC_ALL, "RUS");
	puts("Введите высоту");
	scanf_s("%f", &h);
	puts("Введите массу");
	scanf_s("%f", &m);
	printf("Сила тяжести равна F = %f Н\n", G * ((m * M) / ((R + h) * (R + h))));





}