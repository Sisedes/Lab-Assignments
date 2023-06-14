//211307078-Kaan Toraman

#include <stdio.h>
#include <stdlib.h>

// 1-Stack (y���n) veri yap�s�, hangi mant��a g�re �al���r, a��klay�n�z.

/*Stack veri yap�s� First in last out(filo) veya Last in First out(lifo) mant���na g�re �al���r. Bu mant��a g�re isimlerinden de
anla��labilece�i gibi ilk giren son ��kar veya son giren ilk ��kar. Bir karton kutuya kitaplar� koydu�umuzu d���n�rsek en alttaki
kitap ilk koydu�umuz kitap olucakt�r, kutunun en �st�ndeki kitap ise en son konulan kitap olucakt�r. En alttaki kitab� ��karmak 
istiyorsak, en son koydu�umuz yani en �stte bulunan kitab� ilk ��kartmam�z gerekecektir. En alttaki kitap ��kt���nda ise en son ��kan
kitap olucakt�r. Bu y�zdende stack yap�s�n�n mant��� filo ya da lifo mant���na g�re �al���r.*/


//2-Stack veri yap�s� ile avantajlar ve dezavantajlar k�saca a��klay�n�z.
/*Avantajlar�:
  -Stack yap�s�n�n i�lem h�z� fazlad�r.
  -Ayn� anda bir elemanla ilgilenildi�i i�in bellek kullan�m�nda verim sa�lar. Ayn� zamanda veri depolamada etkili ve farkl� bir y�ntem
kullan�r.
  Dezavantajlar�:
  -Bellek kullan�m� s�n�rl�d�r ve y���nlar �ok �abuk ta�ma yapar.
  -Stackte bulunan ara elemanlara eri�ilmek istenildi�i zaman, elemana kadar olan stack k�sm� tamamen bo�alt�l�r.*/
  
  
//3-FIFO (First-In, First-Out), LIFO (Last-In, First-Out) kavramlar�n� a��klay�n�z.
/*FIFO yani first in first out, ad�ndan da anla��ld��� gibi ilk giren ilk ��kar mant���d�r. Bunu g�nl�k hayatta girdi�imiz bir
al��veri� s�ras� olarak d���nebiliriz. S�raya ilk giren ki�i kasaya ilk ula��r ve ilk ��kar, son giren ise kasaya son ula��r ve son
��kar.
LIFO ise last in first out, son girenin ilk ��kt��� mant�kt�r. Bunu g�nl�k hayatta koli i�ine yerle�tirlen kitaplar olarak d���nebiliriz.
En alttaki kitap ilk koyulan kitapt�r ve onu almak istersek en �stteki kitab� yani en son konulan kitab� ilk �nce d��ar� ��karmam�z
gerekir. Yani ilk giren kitap en son ��kacakt�r.*/


//4- LIFO mant��� ile �al��an bir diziye eleman ekleme ve diziden eleman ��karma i�lemlerini birer fonksiyon ile yaz�n�z.

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

