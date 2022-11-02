int reverse (iX[10], iY[10],iN)
{
     int i, tmp;
     for( i = 0 ; i < iN / 2 ; i + + )
    {
        tmp = iX [ i ] ;
        iX [ i ] = iY [ iN - 1 - i ] ;
        arr [ iN - 1 - i ] = tmp ;
    }
}

