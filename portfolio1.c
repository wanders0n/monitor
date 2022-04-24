#include <stdio.h>
int main ()
{
	int vt_brancos, vt_nulos, vt_validos, vts_total,brancos;
	printf ("Informe a quantidade de votos Brancos: ");
	    scanf ("%d",&vt_brancos);
	printf("Informe a quantidade de votos Nulos:");
    	scanf("%d",&vt_nulos);
	printf("Informe a quantidade de votos Validos:");
		scanf("%d",&vt_validos);

    vts_total=vt_brancos+vt_nulos+vt_validos;
    //brancos = vt_brancos*100 / vts_total;

    printf("Total Geral de Votos =%d",vts_total);
    printf("\n");
    printf("Percentual de votos Brancos = %d",vt_brancos*100 / vts_total, "%");
    printf("\n");
    printf ("Percentual de votos Nulos = %d ", vt_nulos * 100 / vts_total, "%");
    printf("\n");
    printf ("Percentual de votos Válidos = %d ", vt_validos * 100 / vts_total, "%");

 if (vt_validos>=(vt_brancos+vt_nulos))
   printf("SOMA DOS VOTOS VÁLIDOS MAIOR OU IGUAL OS BRANCOS E NULOS");
else 
  printf("SOMA DOS VOTOS BRANCOS E NULOS ULTRAPASSA OS VÁLIDOS");
	
	return(0);
}
  
