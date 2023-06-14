#include <stdio.h>
#include <stdlib.h>


struct Agac
{
	int data;
    struct Agac* sol;
    struct Agac* sag;
};

struct Agac* AgacOlustur(int data)
{
    struct Agac* yeni = (struct Agac*) malloc(sizeof(struct Agac));
    yeni->data = data;
    yeni->sol = NULL;
    yeni->sag = NULL;
    return yeni;
}


void preorder(struct Agac* kok) {
  	if(kok==NULL)
	return;
	
	printf("%d ", kok->data);
    preorder(kok->sol);
    preorder(kok->sag);
}

void inorder(struct Agac* kok) {
    if (kok == NULL)
        return;
	
	inorder(kok->sol);
    printf("%d ", kok->data);
    inorder(kok->sag);  
}

void postorder(struct Agac* kok) {
    if (kok == NULL)
        return;
	
	postorder(kok->sol);
    postorder(kok->sag);
    printf("%d ",kok->data);
}

int dugum_sayisi(struct Agac* kok) {
    if (kok == NULL)
        return 0;
    return 1 + dugum_sayisi(kok->sol) + dugum_sayisi(kok->sag);
}

int agacDerinligi(struct Agac* kok) {
    if (kok == NULL) {
        return 0;
    } else {
        int solDerinlik = agacDerinligi(kok->sol);
        int sagDerinlik = agacDerinligi(kok->sag);

        if (solDerinlik > sagDerinlik) {
            return (solDerinlik + 1);
        } else {
            return (sagDerinlik + 1);
        }
    }
}

int main(int argc, char *argv[]) {
	
	//Verilen binary tree 27,39,18,14,22,29,42,2,17,12,24,34,15,23 þeklinde dizi olur. 
	
	struct Agac* kok = AgacOlustur(27);
	kok->sol = AgacOlustur(39);
	kok->sag = AgacOlustur(18);
	kok->sol->sol = AgacOlustur(14);
	kok->sol->sag = AgacOlustur(22);
	kok->sag->sol = AgacOlustur(29);
	kok->sag->sag = AgacOlustur(42);
	kok->sol->sol->sol = AgacOlustur(2);
	kok->sol->sag->sol = AgacOlustur(17);
	kok->sol->sag->sol->sol = AgacOlustur(12);
	kok->sol->sag->sag = AgacOlustur(24);
	kok->sag->sag->sag = AgacOlustur(34);
	kok->sol->sag->sag->sol = AgacOlustur(15);
	kok->sag->sag->sol = AgacOlustur(23);
    
    printf("In-Order\n");
    inorder(kok);
    printf("\n");
    printf("Pre-Order\n");
    preorder(kok);
    printf("\n");
    printf("Post-Order\n");
    postorder(kok);
	printf("\n Dugum Sayisi:");
	printf(" %d", dugum_sayisi(kok));
	printf("\n Derinlik:");
	printf("%d", agacDerinligi(kok));
	return 0;
}
