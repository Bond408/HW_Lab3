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
	puts("������� ������");
	scanf_s("%f", &h);
	puts("������� �����");
	scanf_s("%f", &m);
	printf("���� ������� ����� F = %f �\n", G * ((m * M) / ((R + h) * (R + h))));





}