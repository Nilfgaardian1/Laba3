#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <locale.h>

#include <stdio.h>


void task1();

void main()
{
	setlocale(LC_ALL, "RUS"); // ��� ������������ ������� ���������
	task1();
}

void task1() {

	int num;
	puts("������� ����� 1");
	scanf("%d", &num);
	
	printf("�������� ����� %d", num);

	int num1;
	puts("������� ����� 2 ");
	scanf("%d", &num1);

	printf("������� ����� %d", num1);

	printf("����� ����� %d + %d ����� %d\n", num , num1 , num + num1);
	printf("�������� ����� %d - %d ����� %d\n", num , num1 , num - num1);
	printf("������������ %d * %d ����� %d\n", num , num1 , num * num1);
	printf("������� %d / %d ����� %d\n", num , num1 , num / num1);






}