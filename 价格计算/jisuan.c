#include <stdio.h>
int main()
{
	int price1,price2,change;
	printf("ʵ�ս��(Ԫ):");
	scanf("%d",&price1);
	printf("Ӧ�ս��(Ԫ):");
	scanf("%d",&price2);
	change = price1 - price2;
	printf("����%dԪ.",change);
	return 0;
 } 
