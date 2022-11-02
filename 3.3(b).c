int product (sum[100],int arr1 [100][100],int arr[100],int M,int N)
{
    for (i=0;i<M;i++)
    {
        for (j=0;j<N;j++)
        {
            sum[i]= arr1[i][j] * arr[j];
        }
    }
}
