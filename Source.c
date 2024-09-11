#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <locale.h>

#include <stdio.h>


void task1();

void main()
{
	setlocale(LC_ALL, "RUS"); // дл€ переключени€ русской кодировки
	task1();
}

void task1() {

	int num;
	puts("введите число 1");
	scanf("%d", &num);
	
	printf("¬вединое число %d", num);

	int num1;
	puts("¬ведите число 2 ");
	scanf("%d", &num1);

	printf("¬ведите число %d", num1);

	printf("сумма чисел %d + %d равна %d\n", num , num1 , num + num1);
	printf("разность чисел %d - %d равна %d\n", num , num1 , num - num1);
	printf("произведение %d * %d равно %d\n", num , num1 , num * num1);
	printf("ƒеление %d / %d равно %d\n", num , num1 , num / num1);






}