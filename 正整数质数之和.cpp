//�ж�һ��������������Щ�����ĺ���ɣ��������
#include<stdio.h>
#include<math.h>

int isprime(int x)
{
	if (x < 2)
		return 0;
	for (int i = 2; i <= sqrt(x); i++)
	{
		if (x%i == 0) {
			return 0;
			break;
		}
	}
	return 1;
}
int main()
{
	int n, i, j, num = 0;
	printf("������һ����������");
	scanf("%d", &n);
	if (n < 4)
		printf("��ƥ��Ķ���Ϊ:0");
	else {
		for (i = 2; i < n; i++)
		{
			for (j = 2; j < n; j++)
			{
				if ((isprime(i) == 1) && (isprime(j) == 1) && (i <= j) && (i + j == n))
				{
					printf("%d=%d+%d\n", n, i, j);
					num += 1;
				}
			}
		}
		printf("��ƥ��Ķ���Ϊ:%d", num);
	}
}
