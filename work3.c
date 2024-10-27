#include<stdio.h>
int main() {
	int a=0, b=0,c=0,m, i;
	int sum1 = 0, sum2 = 0;
	double ave1, ave2;
	for (i = 1; i <= 20; i++) {
		printf("请输入第%d个数字:", i);
		scanf_s("%d", &m);
		if (m < 0) {
			a = a + 1;
			sum1 = sum1 + m;
		}
		if (m > 0) {
			b = b + 1;
			sum2 = sum2 + m;
		}
			
		if (m==0) {
			c = c + 1;
		}
	}
	ave1 = sum1 / a;
	ave2 = sum2 / b;
	printf("\n正整数有%d个", b);
	printf("\n负整数有%d个", a);
	printf("\n零有%d个:", c);
	printf("\n正整数和为：%d", sum2);
	printf("\n负整数和为：%d", sum1);
	printf("\n正整数和的平均数为：%lf", ave2);
	printf("\n负整数和的平均数为：%lf", ave1);
	return 0;
}