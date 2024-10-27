#include<stdio.h>
int main() {
	int maxp = 0, minp = 0, maxn = 0, minn = 0, a = 0, z1 = 0, z2 = 0;
	int i;
	for (i = 1; i <= 20; i++) {
		printf("请输入第%d个数字:", i);
		scanf_s("%d", &a);
		if (a > 0) {
			if (z1 == 0) {
				maxp = minp = a;
				z1++;
			}
			if (maxp <= a) {
				maxp = a;
			}
			if (minp >= a) {
				minp = a;
			}
		}
		else if (a < 0) {
			if (z2 == 0) {
				maxn = minn = a;
				z2++;
			}
			if (maxn <= a) {
				maxn = a;
			}
			if (minn >= a) {
				minn = a;
			}
		}
	}
	printf("最大正整数为：%d\n最小正整数为:%d\n最大负整数为:%d\n最小负整数为%d:", maxp, minp, maxn, minn);
	return 0;
}
	