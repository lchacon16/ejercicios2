#include <stdio.h>
#include <stdlib.h>



int main()
{
int i, num, arre_p[12], arre_i[12], cont_p=0, cont_i=0;

for(i=1; i<=12; i++)
{
printf("\nIntroduce un numero %d: ", i);
scanf("%d", &num);
if( num % 2 == 0)
{
arre_p[cont_p]=num;
cont_p++;
}
else{
arre_i[cont_i]=num;
cont_i++;
}
}

printf("\n Los numeros pares son: ");
for(i=0; i<cont_p; i++)printf(" %d ", arre_p[i]);

printf("\n\n Los numeros impares son: ");
for(i=0; i<cont_i; i++)printf(" %d ", arre_i[i]);

return 0;
}
