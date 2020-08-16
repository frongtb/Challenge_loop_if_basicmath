#include<stdio.h>
#include<math.h>
int main()
{
	float n, p, sd, sum, start, stop;
	scanf("%f %f", &start, &stop);
	float Aver = (start + stop) / 2.0;

	if (start <= stop)
	{
		for (; start <= stop; start++)
		{
			printf("%.0f ", start);
			sum += start;
			p += pow(start, 2);
			n++;

		}
	}
	else
	{
		for (; start >= stop; start--)
		{
			printf("%.0f ", start);
			sum += start;
			p += pow(start, 2);
			n++;
		}
	}
	printf("\nAverage = %.1f\n", Aver);
	sd = sqrt((p - (sum * sum) / n) / (n - 1));
	printf("SD = %.2f", sd);
	return 0;
#define _CRT_SECURE_NO_WARNINGS
}