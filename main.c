//Eyup KORURER
//04.02.2017

#include <stdio.h>
void find_prime_number(int a,int b){
/*Bu fonksiyona gelen iki parametre hangi aral�kar aras�nda arama yapaca��m�z� g�sterir.*/
int i,j,sonuc;
for(i=a;i<=b;i++){
//Birinci d�ng� gelen parametreler aras�ndaki art��� sa�lar
       for(j=2;j<i;j++){
//�kinci d�ng� birinci d�ng�den gelen say�ya kadar olan say�lar� s�ralar
       if(i%j==0){
/*BU ko�ul birinci d�ng�den gelen de�erin ikinci d�ng�den gelen de�ere g�re olan modunu kontrol eder*/
            sonuc=0;
            break;
            }else{
                sonuc =1;
            }
        }
        if(sonuc==1)
            printf("%d\n",i);
    }
}




int main() {
    int sayi1,sayi2;
    printf("kucuk sayiyi giriniz :");
    scanf("%d",&sayi1);
    printf("buyuk sayiyi giriniz :");
    scanf("%d",&sayi2);
    find_prime_number(sayi1,sayi2);
    return 0;

}
