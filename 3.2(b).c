int target (int arr[100][100],int arrTar[10],int m,int n)
{
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            if (arr[i][j] == arrTar[j])
            {
                printf("The position of Target value is : [%d][%d]",i,j);
            }
        }
    }
}
