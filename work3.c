#include<stdio.h>
int main() {
	int a=0, b=0,c=0,m, i;
	int sum1 = 0, sum2 = 0;
	double ave1, ave2;
	for (i = 1; i <= 20; i++) {
		printf("�������%d������:", i);
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
	printf("\n��������%d��", b);
	printf("\n��������%d��", a);
	printf("\n����%d��:", c);
	printf("\n��������Ϊ��%d", sum2);
	printf("\n��������Ϊ��%d", sum1);
	printf("\n�������͵�ƽ����Ϊ��%lf", ave2);
	printf("\n�������͵�ƽ����Ϊ��%lf", ave1);
	return 0;
}