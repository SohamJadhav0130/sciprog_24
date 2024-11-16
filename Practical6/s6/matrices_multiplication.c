// matrix multiplication C = A*B
void matmul(int n, int p, int q, double A[5][3],  double B[3][4], double C[5][4])
{
    int i, j, k; // loop indices

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < q; j++)
        {
            for (k = 0; k < p; k++)
            {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }
}