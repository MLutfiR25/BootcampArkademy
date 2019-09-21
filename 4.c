#include<stdio.h>

// Deklarasi Variable
int main(void) {
   int baris,kolom, i, j, n0 = 0, n1 = 1, N = 1;

printf("Masukkan Baris= ");		
scanf("%d", &baris);		//Input baris
printf("Masukkan kolom = ");
scanf("%d", &kolom);		//Input kolom
i=baris;
j=kolom;
   for (baris = 1; baris <= i; baris++) {			//Pengulangan jumlah baris
      for (kolom = 1; kolom <= j; kolom++) {		//Pengulangan jumlah kolom dalam satu baris
         if (baris == 1 && kolom == 1) {
            printf("0\t");							//nilai Indeks awal untuk baris 1 kolom 1
            continue;
         }
         printf("%d\t", N);
 
         //Menghitung deret fibonacci
         N = n0 + n1;
         n0 = n1;
         n1 = N;
      }
      printf("\n");
   }
   return 0;
}
