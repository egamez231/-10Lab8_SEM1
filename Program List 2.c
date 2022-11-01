#include <stdio.h>

int get_Data (int arr[100][100], int,int);
int calc (int arr_tot[100][100],int arr1[100][100],int arr2[100][100],int arr3[100][100],int,int);
void out_display (int arr[100][100], int ,int);

int main ()
{
    int row,column, arr1 [100][100],arr2 [100][100],arr3 [100][100],arr_tot [100][100];

    printf("Please determine the size of Matrix (row & column):");
    scanf("%d%d",&row,&column);

    printf("\nEnter Element Array 1\n");
    get_Data (arr1,row,column);

    printf("\nEnter Element Array 2\n");
    get_Data (arr2,row,column);

    printf("\nEnter Element Array 3\n");
    get_Data (arr3,row,column);

    calc (arr_tot,arr1,arr2,arr3,row,column);

    out_display (arr_tot,row,column);

}

int get_Data (int arr[100][100], int row,int column)
{
    int i,j,x,y;

    x = row;
    y = column;



    printf("Please input data for the array\n");
    for (i=0;i<x;i++)
    {
        for (j=0;j<y;j++)
        {
            printf ("Element in array [%d][%d]:", i,j);
            scanf("%d",&arr[i][j]);
        }
    }
}

int calc (int arr_tot[100][100],int arr1[100][100],int arr2[100][100],int arr3[100][100],int row,int column)
{
    int i,j,x,y;

    x = row;
    y = column;

    for (i=0;i<x;i++)
    {
        for (j=0;j<y;j++)
        {
           arr_tot[i][j]= arr1[i][j] + arr2[i][j] + arr3[i][j];
        }
    }

}

void out_display (int arr[100][100], int row,int column)
{
    int i,j,x,y;

    x = row;
    y = column;

    printf ("\n\nThe Sum of Matrix is:\n");
    for (i=0;i<x;i++)
    {
        for (j=0;j<y;j++)
        {
           printf ("%d  ",arr[i][j]);

           if (j == y -1)
           {
               printf ("\n");
           }
        }
    }
}
