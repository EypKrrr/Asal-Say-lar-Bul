//Eyup KORURER
//04.02.2017

#include <stdio.h>
void find_prime_number(int a,int b){
/*Bu fonksiyona gelen iki parametre hangi aralýkar arasýnda arama yapacaðýmýzý gösterir.*/
int i,j,sonuc;
for(i=a;i<=b;i++){
//Birinci döngü gelen parametreler arasýndaki artýþý saðlar
       for(j=2;j<i;j++){
//Ýkinci döngü birinci döngüden gelen sayýya kadar olan sayýlarý sýralar
       if(i%j==0){
/*BU koþul birinci döngüden gelen deðerin ikinci döngüden gelen deðere göre olan modunu kontrol eder*/
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
