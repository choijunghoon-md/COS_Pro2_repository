#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int solution(int classes[],int classes_len, int m) {
	int answer = 0;
	for (int i = 0; i < classes_len; i++) {
		if (classes[i] % m != 0)
			answer +=  classes[i] / m + 1;
		else
			answer +=  classes[i] / m;
	}
	return answer;
}

int main() {
	int classes[] = { 80,45,33,20 };
	int m = 30;
	int ret = solution(classes, 4, m);
	printf("solution ÇÔ¼öÀÇ º¯È¯ °ªÀº %d ÀÔ´Ï´Ù.\n", ret);

	return 0;
}
