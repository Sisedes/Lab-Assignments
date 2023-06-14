//211307078-Kaan Toraman

#include <stdio.h>
#include <stdlib.h>

// 1-Stack (yýðýn) veri yapýsý, hangi mantýða göre çalýþýr, açýklayýnýz.

/*Stack veri yapýsý First in last out(filo) veya Last in First out(lifo) mantýðýna göre çalýþýr. Bu mantýða göre isimlerinden de
anlaþýlabileceði gibi ilk giren son çýkar veya son giren ilk çýkar. Bir karton kutuya kitaplarý koyduðumuzu düþünürsek en alttaki
kitap ilk koyduðumuz kitap olucaktýr, kutunun en üstündeki kitap ise en son konulan kitap olucaktýr. En alttaki kitabý çýkarmak 
istiyorsak, en son koyduðumuz yani en üstte bulunan kitabý ilk çýkartmamýz gerekecektir. En alttaki kitap çýktýðýnda ise en son çýkan
kitap olucaktýr. Bu yüzdende stack yapýsýnýn mantýðý filo ya da lifo mantýðýna göre çalýþýr.*/


//2-Stack veri yapýsý ile avantajlar ve dezavantajlar kýsaca açýklayýnýz.
/*Avantajlarý:
  -Stack yapýsýnýn iþlem hýzý fazladýr.
  -Ayný anda bir elemanla ilgilenildiði için bellek kullanýmýnda verim saðlar. Ayný zamanda veri depolamada etkili ve farklý bir yöntem
kullanýr.
  Dezavantajlarý:
  -Bellek kullanýmý sýnýrlýdýr ve yýðýnlar çok çabuk taþma yapar.
  -Stackte bulunan ara elemanlara eriþilmek istenildiði zaman, elemana kadar olan stack kýsmý tamamen boþaltýlýr.*/
  
  
//3-FIFO (First-In, First-Out), LIFO (Last-In, First-Out) kavramlarýný açýklayýnýz.
/*FIFO yani first in first out, adýndan da anlaþýldýðý gibi ilk giren ilk çýkar mantýðýdýr. Bunu günlük hayatta girdiðimiz bir
alýþveriþ sýrasý olarak düþünebiliriz. Sýraya ilk giren kiþi kasaya ilk ulaþýr ve ilk çýkar, son giren ise kasaya son ulaþýr ve son
çýkar.
LIFO ise last in first out, son girenin ilk çýktýðý mantýktýr. Bunu günlük hayatta koli içine yerleþtirlen kitaplar olarak düþünebiliriz.
En alttaki kitap ilk koyulan kitaptýr ve onu almak istersek en üstteki kitabý yani en son konulan kitabý ilk önce dýþarý çýkarmamýz
gerekir. Yani ilk giren kitap en son çýkacaktýr.*/


//4- LIFO mantýðý ile çalýþan bir diziye eleman ekleme ve diziden eleman çýkarma iþlemlerini birer fonksiyon ile yazýnýz.

#define stackSize 10

typedef struct{
int data[stackSize];
int top	
}stack;

void ElemanEkle(stack *yigin, int a){
	if(yigin->top==stackSize-1){
		printf("Yigin tasti");
	}
	else{
		yigin->top++;
		yigin->data[yigin->top]=a;
	}
}

int ElemanCikar(stack *yigin){
	if(yigin->top==-1){
		printf("Yigin bos");
		return -1;
	}
	else{
	int a=yigin->top--;
	return a;
	}
}



int main(int argc, char *argv[]) {
	stack yigin;
	yigin.top=-1;
	int i;
	
	printf("Yigindaki elemanlar:\n");
	for(i=0;i<stackSize;i++){
		ElemanEkle(&yigin,i);
		printf("%d ",yigin.data[yigin.top]);
	}
	
	for(i=0;i<3;i++){
		int cikarEleman=ElemanCikar(&yigin);
		printf("\n%d elemani yigindan cikarildi",cikarEleman);
	}
	return 0;
}

