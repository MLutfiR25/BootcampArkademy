#include<stdio.h>


// Fungsi mmenghitung bonus Mie yang didapat
int HitungBonusMie(int uang, int Tanggal){
int Bonus = 0, jumlahMie, hargaMie = 2500;
jumlahMie = uang/hargaMie;

 if (Tanggal%2 !=0){
  Bonus = jumlahMie/3;
 }
 
 else {
  Bonus = jumlahMie/4;
 }
 
 if(Tanggal%5 == 0){
  if(Bonus%2 !=0){
   Bonus = Bonus*10;
  }
  else{
   Bonus = Bonus*5;
  }
 }
 
  return Bonus;
}
int main(){
	int Bonus;
	Bonus = HitungBonusMie(12500,5);
	printf("%d",Bonus);
}
