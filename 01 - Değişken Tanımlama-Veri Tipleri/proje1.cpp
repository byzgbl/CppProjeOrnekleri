#include <iostream>
using namespace std;

int main(){

    int yas;        //yas ismindeki tamsayı(int) tipindeki değişken

    float toplam;    //toplam ismindeki ondalıklı sayı(float) tipindeki değişken

    string ad;      //ad ismindeki string(metin ögesi) tipindeki değişken

// yukarıda 3 farklı değişken tanımlama yapılmış fakat bu değişkenlere herhangi bir değer(value) verilmemiş.
// aşağıdaki gibi değişkenler tanımlanırken ilk atamalarıda yapılabilir.

   int yas=21; // yas değişkenine 21 atanmış.

   float toplam=3.25; // fiat değişkenine 3.25 atanmış.

   string ad='Beyza'; // harf değişkenine B atanmış.

// çoklu değişken tanımlarken;

   int sayi1;
   int sayi2;
   int sayi3;

// ya da;

   int sayi1,sayi2,sayi3;  // üstteki 3 paragrafı bu şekilde tek paragraftada tanımlayabiliriz

// çoklu değişkenlerin ilk atamsı yapılırken;

   int sayi1=5;
   int sayi2=7;
   int sayi3=3;
// ya da;
   int sayi1=5,sayi2=7,sayi3=3;   // yine üstteki 3 paragraf yerine tek satırda değişkenlerin ilk ataması yapılabilir
                                
    return 0;
}