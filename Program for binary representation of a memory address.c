#include <stdio.h>
int main()
{
    int row,col;
    int k,w;
    int offset;
    printf("Enter row index:");
    scanf("%d",&row);
    printf("Enter column index:");
    scanf("%d",&col);
    printf("Enter k (N=2^k):");
    scanf("%d",&k);
    printf("Enter w(Elment size = 2^w bytes)");
    scanf("%d",&w);
    offset = ((row<<k)+col)<<w;
    printf("\n Offset = %d \n", offset);
    return 0;
}
