#include<stdio.h>
#define N 3
int main() {
	int i;
	double num, min;
	printf("�������һ����:");
	scanf_s("%lf", &min);
	for (i = 2; i <= N; i++) {
		printf("�������%d����:", i);
		scanf_s("%lf", &num);
		if (num < min)
			min = num;
		printf("��ǰ��С����%lf\n", min);
	}
	printf("\n��ǰ��С���ǣ�%lf", min);
	return 0;
}