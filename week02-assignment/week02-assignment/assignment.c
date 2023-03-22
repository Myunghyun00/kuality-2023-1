#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
	double rate;
	double usd;
	int krw;

	printf("환율을 입력하세요:");
	scanf("%lf", &rate);

	printf("원화 금액을 입력하세요:");
	scanf("%d", &krw);

	usd = krw / rate;

	printf("원화 %d원은 %.2f달러입니다.\n", krw, usd);
}