#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
	double rate;
	double usd;
	int krw;

	printf("ȯ���� �Է��ϼ���:");
	scanf("%lf", &rate);

	printf("��ȭ �ݾ��� �Է��ϼ���:");
	scanf("%d", &krw);

	usd = krw / rate;

	printf("��ȭ %d���� %.2f�޷��Դϴ�.\n", krw, usd);
}