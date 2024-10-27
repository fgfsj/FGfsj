#include<stdio.h>
#define N 3
int main() {
	int i;
	double num, min;
	printf("请输入第一个数:");
	scanf_s("%lf", &min);
	for (i = 2; i <= N; i++) {
		printf("请输入第%d个数:", i);
		scanf_s("%lf", &num);
		if (num < min)
			min = num;
		printf("当前最小数：%lf\n", min);
	}
	printf("\n当前最小数是：%lf", min);
	return 0;
}