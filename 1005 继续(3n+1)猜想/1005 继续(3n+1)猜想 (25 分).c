#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void sortMaoPao(int a[], int length)		//ð������
{
	int i, j, temp;
	for (i = 0; i < length; i++)
	{
		for (j = 0; j < length; j++)
		{
			if (a[j] < a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j + 1] = temp;

			}
		}
	}
}
int main()
{
	int i,n,k,j=0;
	int s[101] = {0};		//���±�����¼����������֣����s[�±�]Ϊ2�������ٴμ��㣬���Ϊ1��������㣻
	int a[101];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &k);
		if (s[k] == 2)
		{
			continue;
		}
		s[k] = 1;
		while (k != 1)
		{
			if (k % 2 == 0)
			{
				k /= 2;
				s[k] = 2;
			}
			else if (k % 2 != 0)
			{
				k = (k * 3 + 1) / 2;
				s[k] = 2;
			}
		}
	}
	for (i = 0; i < 101; i++)		// ��ֵΪ1�����洢����
	{
		if (s[i] == 1)
		{
			a[j] = i;
			j++;
		}
	}
	sortMaoPao(a, j);				//����
	for (i = 0; i < j; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(" %d", a[i]);
	}
	return 0;
}