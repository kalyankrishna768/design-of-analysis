#include <stdio.h>
#include <time.h>
#define N 100 
void multiplyMatrix(int mat1[][N], int mat2[][N], int result[][N])
{
    for (int i = 0; i < N; i++) 
{
        for (int j = 0; j < N; j++)
{
            result[i][j] = 0;
            for (int k = 0; k < N; k++) 
{
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int mat1[N][N], mat2[N][N], result[N][N];
    clock_t start, end;
    double cpu_time_used;
    for (int i = 0; i < N; i++)
{
        for (int j = 0; j < N; j++)
{
            mat1[i][j] = i + j;
            mat2[i][j] = i - j;
        }
    }
    start = clock();
    multiplyMatrix(mat1, mat2, result);
    end = clock();
    cpu_time_used = ((double) (end - start)) 
    printf("Time taken for matrix multiplication: %f seconds\n", cpu_time_used);
     return 0;
}
