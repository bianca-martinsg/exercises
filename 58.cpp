#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
main()
{
 int lin,col, tab;
 int mat[4][4];
 for (lin=0; lin<=3; lin++)
 {
 for (col=0; col<=3;col++)
 {
 printf("Digite ELEMENTO da linha %d, coluna %d da matriz: ",lin+1,col+1);
 scanf("%d", &mat[lin][col]);
 }
 }
 printf("Matriz\n");
 for (lin=0;lin<=3;lin++)
 {
 for (col=0;col<=3;col++)
{
 printf("%d\t",mat[lin][col]);
}
printf("\n\n");
}
printf("\n\nDiagonal principal\n\n");
for (lin=0; lin<=3;lin++)
{
printf("%d\n",mat[lin][lin]);
for (tab=1;tab<=lin+1;tab++)
printf("\t");
}
printf("\n\n");
system("pause");
return 0;
}

