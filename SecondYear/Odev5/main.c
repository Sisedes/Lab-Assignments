// 211307078-Kaan Toraman
#include <stdio.h>
#include <stdlib.h>

struct alisveris{
	int id;
	char alinacak[15];                             //alisveris adinda icinde id ve alinacak bulunduran iki degisken bulunan, onceki ve sonraki adinda iki pointer bulunan bir struct tanýmlýyoruz.
	struct alisveris *onceki;
	struct alisveris *sonraki;
};

struct alisveris* dugumOlustur(){    //alisveris adlý structtan hazir dugumler olusturmak icin geri donus degeride struct olan bir metot tanýmladým.
	struct alisveris *ilkEleman=(struct alisveris*)malloc(sizeof(struct alisveris));
	ilkEleman->id=1;
    strcpy(ilkEleman->alinacak, "Ekmek");
	
	struct alisveris *ortaElemani=(struct alisveris*)malloc(sizeof(struct alisveris)); //malloc metodu bellete yer olusturuldu.
	ilkEleman->sonraki=ortaElemani;
	ilkEleman->onceki=NULL;       //kendinden onceki degeri tanimliyor. Bura da ilk eleman oldugu icin null olarak tanimlandim;
	ortaElemani->id=2;
    strcpy(ortaElemani->alinacak, "Yumurta");
	ortaElemani->onceki=ilkEleman;  //kendinden sonraki elemani tanimladim
	
	struct alisveris *sonEleman=(struct alisveris*)malloc(sizeof(struct alisveris));
	ortaElemani->sonraki=sonEleman;
	sonEleman->id=3;
	strcpy(sonEleman->alinacak, "Sut");
	sonEleman->onceki=ortaElemani;
	sonEleman->sonraki=NULL;
	return ilkEleman;
	
}
void ekranaYazdir(struct alisveris *Eleman){ //ekrana yazdirmak icin basit bir while dongusu metodu kurdum.
    while(Eleman != NULL){
        printf("%s ", Eleman->alinacak);
        Eleman = Eleman->sonraki;
    }
}

void sonunaEkle(struct alisveris *liste, char alinacak[15]){
	struct alisveris *ekleEleman=(struct alisveris*)malloc(sizeof(struct alisveris));
	strcpy(ekleEleman->alinacak,alinacak);
	
	while(liste->sonraki!=NULL){ //while ile kendinden sonraki elemanin bos olup olmadigini kontrol ettirdim. Bu sayede en sona ekleyecegim elemanin yerini belirlemis oldum.
		liste=liste->sonraki;
	}
	ekleEleman->id=liste->id+1;
	liste->sonraki=ekleEleman;
	ekleEleman->onceki=liste;
	ekleEleman->sonraki=NULL;
	
}

void arayaEkle(struct alisveris *liste, int konumID, char alinacak[15]){ //disardan id vererek verilen id'nin konumuna eleman ekleyen metod.
		struct alisveris *ekleEleman=(struct alisveris*)malloc(sizeof(struct alisveris));
		
		while(liste->id!=konumID){
		liste=liste->sonraki;
	}
	strcpy(ekleEleman->alinacak,alinacak);
	ekleEleman->id=liste->id;
	ekleEleman->onceki=liste->onceki;
	liste->onceki->sonraki=ekleEleman;
	ekleEleman->sonraki=liste;
	liste->onceki=ekleEleman;
	
}
void dugumSil(struct alisveris *liste, int silID){//mainde silmek icin belirttigimiz yeri id'ye gore bulup silen metod.
	
	while(liste!= NULL && liste->id != silID) {
        liste = liste->sonraki;
    }
        if(liste->onceki != NULL) {
        liste->onceki->sonraki = liste->sonraki;
    } else {
        liste = liste->sonraki;
    }
    if(liste->sonraki != NULL) {
        liste->sonraki->onceki = liste->onceki;
    }
    
    free(liste); //hafizada ayirrmis oldugumuz yeri serbest birakmaya yarayan bir metod.
}
void tersYazdir(struct alisveris *Eleman){//ekrana yazdir metodunun aynisi ancak bu sefer sondan itibaren yazdirmaya 
    while(Eleman->sonraki != NULL){
        Eleman = Eleman->sonraki; //bu while dongusu ile en son elemana gidiliyor
    }
    while(Eleman != NULL){
        printf("%s ", Eleman->alinacak); //burada ise ekrana yazdir metodunun aynisi var
        Eleman = Eleman->onceki;
    }
}

int main(int argc, char *argv[]) { //yazdirma ve metodlari kullandigimiz main metodu.
	
	struct alisveris *liste=dugumOlustur();
	printf("Alinacaklar:\n");
	ekranaYazdir(liste);
	
	sonunaEkle(liste,"Un");
	sonunaEkle(liste,"Seker");
	printf("\nListeye un ve seker eklendi\n");
	ekranaYazdir(liste);
	
	arayaEkle(liste,3,"Bal");
	printf("\nSutten oncesine bal eklendi\n");
	ekranaYazdir(liste);
	
	dugumSil(liste,4);
	printf("\nEvde sut oldugu akliniza geldi ve listeden sildiniz.\n");
	ekranaYazdir(liste);
	
	printf("\n");
	
	printf("\nAlisveris Listemiz\n");
	ekranaYazdir(liste);
	printf("\n");
	printf("\nTersten yazilisi\n");
	tersYazdir(liste);
	return 0;
}
