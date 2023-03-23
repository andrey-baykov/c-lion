#include <stdio.h>

#define SIZE 8

void max() {
    int arr[SIZE] = {23, 43, 7, 65, 7, 8, 9, 12};
    int i, max;
    max = arr[0];
    for (i = 1; i < SIZE; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    printf("%d\n", max);
}

void array2D() {
    int mat[2][3] = {5,2,1,3,4}; // = {{5,2,1},{3,4}}
    printf("%lu\n", &mat[0][1]); //address of element
}

int main() {
    /*
    int arr[5] = {1,2,3,4,5};
    float fArr[3] = {1.1, 1.2, 1.3};
    char cArr[4] = {'M', 'i', 'k','e'};
    int ArrZero[5] ={0}; // Same as {0,0,0,0,0};
    int ArrP[5] = {1,2}; // Same as {1,2,0,0,0};
    */

//    int grades[5];
//    printf("%d\n", grades);

//    max();
    array2D();
    return 0;
}

/*
 // An Array of Pointers

int main()
{
	int* arr[5];
	int i;
	for (i = 0; i < 5; i++)
	{
		arr[i] = (int*)calloc(3, sizeof(int));
	}
	arr[1][1] = 30;
	scanf("%d", &arr[0][2]);
	printf("Arr[4][2] = %d\n", arr[4][2]);
}

#########

// An Array of Pointers

int main()
{
	int* arr[5];
	arr[0] = (int*)calloc(1, sizeof(int));
	arr[1] = (int*)calloc(2, sizeof(int));
	arr[2] = (int*)calloc(2, sizeof(int));
	arr[3] = (int*)calloc(3, sizeof(int));
	arr[4] = (int*)calloc(3, sizeof(int));
}

##########

// An Array of Pointers

int main()
{
	int* arr[5];
	int i;
	int numOfColumns;
	for (i = 0; i < 5; i++)
	{
		printf("Please enter number of columns for this row: ");
		scanf("%d", &numOfColumns);
		arr[i] = (int*)calloc(numOfColumns, sizeof(int));
	}
}

##########

int main()
{
	int** a;
	int rows, columns;
	int i;
	printf("Please enter number of rows: ");
	scanf("%d", &rows);

	a = (int**)calloc(rows, sizeof(int*));
	for (i = 0; i < rows; i++)
	{
		printf("Enter number of columns: ");
		scanf("%d", &columns);
		a[i] = (int*)calloc(columns, sizeof(int));
	}

}

############

int** allocate2DMatrix()
{
	int** a;
	int rows, columns;
	int i;

	printf("Enter number of rows for the 2D Matrix: ");
	scanf("%d", &rows);

	a = (int**)calloc(rows, sizeof(int*));
	if (!a) return NULL;
	for (i = 0; i < rows; i++)  // Allocating an Array of Integers for every row.
	{
		printf("Enter number of columns for row %d: ", i + 1);
		scanf("%d", &columns);
		a[i] = (int*)calloc(columns, sizeof(int));
		if (!a[i])
		{
			// #TODO --> freeMatrix
			return NULL;
		}
	}
	return a;
}

int** allocate2DMatrix_opt2(int rows, int columns)
{
	int** a;
	int rows, columns;
	int i;
	a = (int**)calloc(rows, sizeof(int*));
	if (!a) return NULL;
	for (i = 0; i < rows; i++)  // Allocating an Array of Integers for every row.
	{
		a[i] = (int*)calloc(columns, sizeof(int));
		if (!a[i])
		{
			// #TODO --> freeMatrix
			return NULL;
		}
	}
	return a;
}

int main()
{
	int** myMatrix;
	int rows, columns;

	printf("Enter number of rows for the 2D Matrix: ");
	scanf("%d", &rows);

	printf("Enter number of columns for row : ",);
	scanf("%d", &columns);

	myMatrix = allocate2DMatrix();
}

#############

void print2DDynamicMatrix(int** a, int rows, int columns)
{
	int i, j; // "i" will be used to iterate over rows, "j" will beused to iterated over columns
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j++)
		{
			// a[i][j]
			printf("%9d", a[i][j]);
		}
		printf("\n");
	}
}

#############


void freeMatrix(int** a, int rows)
{
	int i;
	for (i = 0; i < rows; i++)
	{
		free(a[i]);
	}
	free(a);
}
*/