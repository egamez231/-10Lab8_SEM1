int SumMulti (int matrixSum[10][10],int mat1[10][10],int mat2[10][10],int M,int N,int P)
{
    int i,l,j,k;
    for (i=0;i<M;i++)
    {
        for (l=0;l<N;l++)
        {
            for (j=0;j<P;j++)
            {
                for (k=0;k<N;k++)
                {
                    matrixSum [l][j]+= mat1[i][j] * mat2[i][k];
                }
            }
        }

    }
}
