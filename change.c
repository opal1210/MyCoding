#include <stdio.h>

int main() {
	int ch = 0 , chm = 1260;
	int coin[4] = { 500, 100, 50, 10 }, cnt = 0;
	for (int j = 0; j < 4; j++) {
		ch = coin[j];
		cnt += chm / ch;
		chm %= ch;
	}
	printf("%d", cnt);
	return 0;
}