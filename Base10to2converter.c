#include <stdio.h>
#include <math.h>

int max_power_cont(int x);
int main(void){

	int y;
	scanf("%d", &y);
	int a[64] = {0};
	int start = max_power_cont(y);

	while(max_power_cont(y) > 0){

		a[max_power_cont(y)] = 1;
		y = y - pow(2, max_power_cont(y));
	}

	a[0] = y % 2;

	while(start >= 0){

		printf("%d", a[start]);
		start--;
	}
	getch();
}

int max_power_cont(int x){

		int maxpwr = 0;

		while(x > 1 && (x - pow(2, maxpwr)) >= pow(2, maxpwr)){

			maxpwr++;
		}
		return maxpwr;

}
