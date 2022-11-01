#include <stdio.h>

int list (int iPut[5]);
void get_max (int arr[5]);

int main ()
{
    int arr[5];
    list (arr);
    get_max (arr);

}

int list (int iPut[5])
{
    int i;
    printf("Input five numbers:");

    for (i=0;i<5;i++)
    {
       scanf("%d",&iPut[i]);
    }


    for (i=0;i<5;i++)
    {
        printf("Element of Array list [%d] = %d\n",i,iPut[i]);
    }

}

void get_max (int arr[5])
{
    int i;
    for (int i = 1; i < 5; ++i)
    {
        if (arr[0] < arr[i])
        {
            arr[0] = arr[i];
        }
    }
    printf("Largest element is : %d", arr[0]);
}
