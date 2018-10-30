#include<stdio.h>
#include<math.h>
#define n 5
void bul(int array[n][n]);
void suma(int array[n][n]);
void s_geometrychne(int array[n][n]);

main()
{
	int i, j;
	static int array[n][n];
	printf("Enter matrix\n");

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("a[%d][%d] : ", i + 1, j + 1);
			scanf_s("%d", &array[i][j]);
		}
	}
	printf("old array\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			printf("%5d", array[i][j]);
		printf("\n");
	}

	bul(array);
	printf("\nnew array\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%5d", array[i][j]);
		}
		printf("\n");
	}
	suma(array);
	s_geometrychne(array);
	system("pause");

}




void bul(int array[n][n])
{
	int i, k, j, c;
	for (j = 0; j < 5; j++)
	{
		for (k = 5 - 1; k >= 0; k--)
		{
			for (i = 0; i < k; i++)
			{
				if (array[i][j] > array[i + 1][j])
				{
					c = array[i][j];
					array[i][j] = array[i + 1][j];
					array[i + 1][j] = c;
				}
			}
		}
	}
}

void suma(int array[n][n])
{
	int i, j, suma;
	for (i = 0; i < 5; i++)
	{
		suma = 0;
		for (j = 0; j < 5; j++)
		{
			if (i < j)
			{
				suma = suma + array[i][j];
			}
		}
		printf("Suma= %d \t", suma);
	}
}

void s_geometrychne(int array[n][n]) {
	int i, j, s_g;
	s_g = 1.0;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (i < j)
			{
				s_g = s_g * array[i][j];
			}
		}
	}
	if (s_g >= 0) {
		printf("\n\n Seredne geom= %fl \t", pow(s_g*1.0, 0.2));
	}
	else {
		printf("\n\n Seredne geom= %fl \t", (pow(fabs(s_g)*1.0, 0.2))*(-1));
	}
}