int largest (arr[10][10])
{
    int i,j;
    for ( i = 1; i < 5; ++i)
    {
       for (j = 1; j < 5; ++j)
       {
         if (arr[0][0] < arr[i][j])
         {
            arr[0][0] = arr[i][j];
         }
       }
    }
}
