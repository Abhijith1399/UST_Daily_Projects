#include<cstdio>

int main()
{
	int a = 10;
	float b = 15.5;
	char c = 'A', x;
	double d = 101.111;
	char e[10];

	printf("\n%c\n%d\n%f\n%lf\n%s\n", a, b, c, d, "Abhi");
	scanf("%c%d%f%lf%s", &c, &a, &b, &d, e);
	 //fflush (studin)
	scanf(" ");  // clear input buffer
	scanf("%c", &x);
	printf("\n%c\n%d\n%f\n%lf\n%s\n%c\n", c, a, b, d, x);

}