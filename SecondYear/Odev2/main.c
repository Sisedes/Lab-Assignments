//211307078-KaanToraman

#include <stdio.h>
#include <string.h>

#include <stdbool.h>

struct Ogrenci
{
   char ad[99];
   int id;
   int ogrenciNO;
   float nott;
};


int sirala(const void *a, const void *b)
{
    struct Ogrenci *a1 = (struct Ogrenci *)a;
    struct Ogrenci *a2 = (struct Ogrenci *)b;
    if ((*a1).nott > (*a2).nott)
        return -1;
    else if ((*a1).nott < (*a2).nott)
        return 1;
    else
        return 0;}



int main()
{
	int ogrenciadet=0;
	int i;
	int j;
	
	
printf("Ogrenci Sayisini Giriniz: \n");
scanf("%d", &ogrenciadet);
struct Ogrenci s[ogrenciadet],gecici;
	
	for (i = 0; i < ogrenciadet; i++) {
        s[i].id = i + 1;
        printf("\nOgrenci Bilgilerini Giriniz:%d\n",i);
		printf("ID::%d\n", s[i].id);
        printf("Ad:");
        scanf("%s", s[i].ad);
        printf("Ogrenci Numarasi:");
        scanf("%d",&s[i].ogrenciNO);
        printf("Ortalama:");
        scanf("%f", &s[i].nott);
    }
    bool don=true;
    
    while(don){
	
    printf("\nOgrenci numarasina gore ogrenci aramak icin 1 girin");
    printf("\nOgrenci ortalamasina gore siralamak icin 2 girin");
    printf("\nTum ogrencilerin ortalama notunu hesaplamak icin 3 girin\n");
    int secim=0;
    printf("Seciminiz: ");
    scanf("%d",&secim);
    
    	if(secim==1){
    		int arama=0;
    		printf("\nAramak icin ogrenci numarasi giriniz:");
    		scanf("%d",&arama);
    		bool cevap=false;
    		for(i = 0; i < ogrenciadet; i++){
    			if(s[i].ogrenciNO==arama){
    				printf(" %d",s[i].id);
    				printf("\n%s ",s[i].ad);
    				printf("%d",s[i].ogrenciNO);
    				printf(" Ortalama: %f",s[i].nott);
    				cevap=true;
    				
				}
				else{
					cevap=false;
					
				}
			}
    		if(cevap==false){
    			printf("\nAranan ogrenci bulunamadi");
			}
			printf("\nMenuye donulsun mu?(E/H)");
			char evet;
			scanf("%s",evet);
			if(evet=='e'||evet=='E'){
			printf("\nOgrenci numarasina gore ogrenci aramak icin 1 girin");
    printf("\nOgrenci ortalamasina gore siralamak icin 2 girin");
    printf("\nTum ogrencilerin ortalama notunu hesaplamak icin 3 girin\n");
    
    printf("Seciminiz: ");
    scanf("%d",&secim);
			}else{
				don=true;
			}
		}
		if(secim==2){
		
		qsort(s, ogrenciadet, sizeof(s[0]), sirala);
		
		for(i=0; i<ogrenciadet;i++){
			printf("%d %s %d %f\n",s[i].id,s[i].ad,s[i].ogrenciNO,s[i].nott);
		}
			
		}
		if(secim==3){
			float toplam=0;
			for(i = 0; i < ogrenciadet; i++){
				toplam=toplam+s[i].nott;
			}
			printf("\nOgrencilerin notlarinin ortalamasi:");
			float totalOrt=toplam/ogrenciadet;
			printf("%f",totalOrt);
		}}
	
  
	
    return 0;
}
