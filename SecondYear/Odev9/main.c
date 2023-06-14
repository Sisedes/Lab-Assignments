//211307078-Kaan Toraman
#include <stdio.h>
#include <stdlib.h>


struct Agac { //avl a�ac�n� tan�ml�yoruz(struct olarak)
    int data;
    struct Agac* sol;
    struct Agac* sag;
    int derinlik;
};

int enyuksek(int a, int b);

int enyuksek(int a, int b) { //de�erleri kar��la�t�rarak en y�ksek olan� bulmak i�in bu metodu kullan�yoruz.
  if(a>b)
  return a;
  else
  return b;
}
int yukseklik(struct Agac* agac){ //a�ac�n dengesinin sa�lanmas� i�in derinli�ini �l��yor.
	if(agac==NULL)
	return 0;
	return agac->derinlik;
}
int denge(struct Agac* agac) {//a�a�ta -1 0 1 dengesinin sa�lanmas� i�in derinlik de�erindende yararlanarak kontol ediyor.
    if (agac == NULL)
        return 0;
    return yukseklik(agac->sol) - yukseklik(agac->sag);
}

struct Agac* sagaDondur(struct Agac* Agac) {//a�ac�m�z� kontrol ederek dengenin sa�lanmas� i�in sa�a ekleme yapan metod
    struct Agac* a = Agac->sol;
    struct Agac* agac2 = a->sag;

    a->sag = Agac;
    Agac->sol = agac2;

    Agac->derinlik = enyuksek(yukseklik(Agac->sol),yukseklik(Agac->sag)) + 1;
    a->derinlik = enyuksek(yukseklik(a->sol), yukseklik(a->sag)) + 1;

    return a;
}

struct Agac* solaDondur(struct Agac* Agac) {//a�ac�m�z� kontrol ederek dengenin sa�lanmas� i�in sola ekleme yapan metod
    struct Agac* a = Agac->sag;
    struct Agac* agac2 = a->sol;

    a->sol = Agac;
    Agac->sag = agac2;

    Agac->derinlik = enyuksek(yukseklik(Agac->sol), yukseklik(Agac->sag)) + 1;
    a->derinlik = enyuksek(yukseklik(a->sol), yukseklik(a->sag)) + 1;

    return a;
}

struct Agac* avl_insert(struct Agac* agac, int data) {//soruda bahsedilen avl_insert metodu
    if (agac == NULL) {
        struct Agac* yeniAgac = (struct Agac*) malloc(sizeof(struct Agac));
        yeniAgac->data = data;
        yeniAgac->sol = NULL;
        yeniAgac->sag = NULL;
        yeniAgac->derinlik = 1;
        return yeniAgac;
    }

    if (data < agac->data) {
        agac->sol = avl_insert(agac->sol, data);
    } else if (data > agac->data) {
        agac->sag = avl_insert(agac->sag, data);
    } else {
        return agac;
    }

    agac->derinlik = 1 + enyuksek(yukseklik(agac->sol), yukseklik(agac->sag));

    int dengeee = denge(agac);

    if (dengeee > 1 && data < agac->sol->data) {
        return sagaDondur(agac);
    }

    if (dengeee < -1 && data > agac->sag->data) {
        return solaDondur(agac);
    }

    if (dengeee > 1 && data > agac->sol->data) {
        agac->sol = solaDondur(agac->sol);
        return sagaDondur(agac);
    }

    if (dengeee < -1 && data < agac->sag->data) {
        agac->sag = sagaDondur(agac->sag);
        return solaDondur(agac);
    }

    return agac;
}
void enkucukbul(struct Agac* agac, int k, int* count, int* result) { //ka��nc� en k����� bulan metod.
    if (agac == NULL || *count >= k) {
        return;
    }
    enkucukbul(agac->sol, k, count, result);
    (*count)++;
    if (*count == k) {
        *result = agac->data;
        return;
    }
    enkucukbul(agac->sag, k, count, result);
}


int main(int argc, char *argv[]) {

	//int tamsayiakisi[]={100,50,200,20,70,53,15,221};//tamsay� ak���n� input olarakta verebiliriz. Altta input olarak verdim.
	
	struct Agac* agac=NULL;
	int sonuc;
	int sayac=0;
	int tamsayiakisi=0;
	int enn;
	printf("Kacinci en kucugu bulmak istediginizi giriniz: ");
	scanf("%d", &enn);
	
	do {
        scanf("%d\n", &tamsayiakisi);
        agac=avl_insert(agac, tamsayiakisi);
        enkucukbul(agac,enn, &sayac,&sonuc);
        printf("%d. en kucuk deger\n",enn);
		printf("%d\n", sonuc);
        
    } while (tamsayiakisi != -1);
	printf("Kacinci en kucugu bulmak istediginizi giriniz: ");
	scanf("%d", &enn);
	 return 0;
	}
	

