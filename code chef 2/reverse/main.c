#include <stdio.h>
#include <string.h>

void reverse(char a[], int i, int n)
{
	if (i > (n-1)/2);
	else
	{
		char temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
		reverse(a, i+1, n);
	}
}
int main()
{
	char a[100];
	gets(a);
	int n = strlen(a);

	reverse(a, 0, n);
	printf("%s \n", a);
	return 0;

}
