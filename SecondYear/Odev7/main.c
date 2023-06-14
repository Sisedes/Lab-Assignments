#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define boyut 100

struct Yigin
{
	int top;
	int data[boyut];
};

void ElemanEkle(struct Yigin* disKapi, int a){
	if(disKapi->top==boyut-1){
		printf("Yigin tasti");
	}
	else{
		disKapi->top++;
		disKapi->data[disKapi->top]=a;
	}
}


char ElemanCikar(struct Yigin* disMandal){
	if(disMandal->top==-1){
		printf("Yigin bos");
		return '\0';
	}
	else{
	
	char a = disMandal->data[disMandal->top--];
	return a;
	}
}

int operator_onceligi(char c) {
    if (c == '+' || c == '-') {
        return 1;
    }
    else if (c == '*' || c == '/') {
        return 2;
    }
    else if (c == '^') 
        return 3;
        
    return 0;
}

int operator_kontrol(char c) {
    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^' || c == '(' || c == ')') {
        return 1;
    }
    return 0;
}

//1 - (, ), +, -, * ve / içeren bir ek ifadesini postfix'e dönüþtüren bir program yazýnýz.

void PostfixDonustur(char* girilen, char* postfix) {
    struct Yigin yigin;
    yigin.top = -1;
    int i, j;
    for (i = 0, j = 0; girilen[i] != '\0'; i++) { //Char dizisinin bittiðini göstermek için \0 kullanýlýr.
         if (isalnum(girilen[i])) {   // isalnum metodu gelen karakterlerin sayý olup olmama durumuna bakar eðer sayý deðilse 0 döner
            postfix[j++] = girilen[i];
        }
        else if (girilen[i] == '(') {
            ElemanEkle(&yigin, '(');
        }
        else if (girilen[i] == ')') {
            while (yigin.data[yigin.top] != '(') {
                postfix[j++] = ElemanCikar(&yigin);
            }
            ElemanCikar(&yigin);
        }
        else if (operator_kontrol(girilen[i])) {
            while (yigin.top != -1 && yigin.data[yigin.top] != '('&& operator_onceligi(girilen[i]) <= operator_onceligi(yigin.data[yigin.top])) {
                postfix[j++] = ElemanCikar(&yigin);
            }
            ElemanEkle(&yigin, girilen[i]);
        }
    }
    while (yigin.top != -1) {
        postfix[j++] = ElemanCikar(&yigin);
    }
    postfix[j] = '\0';
}

//2 - Kullanýcýnýn gireceði postfix ifadesini infix'e çeviren bir program yazýnýz. 
   //burada ilk metot gibi denedim ama düzgün çalýþmýyor.
   //sadece parantezleri doðru konumda yazdýrýyor diðer deðerler gelmiyor. Düzeltemedim o kýsmý.

void PostfixiInfixeDonustur(char* girilen, char* infix) {
    struct Yigin yigin;
    yigin.top = -1;
    char kopya1, kopya2;
    int i;
    for (i = 0; girilen[i] != '\0'; i++) {
        if (isalnum(girilen[i])) {
            ElemanEkle(&yigin, girilen[i]);
        }
        else {
            kopya1 = ElemanCikar(&yigin);
            kopya2 = ElemanCikar(&yigin);
            sprintf(infix, "(%c %c %c)", kopya2, girilen[i], kopya1);
            ElemanEkle(&yigin, *infix);
        }
    }
    *infix = ElemanCikar(&yigin);
}

//3 - a+(b*c(d/e^f)*g)*h) infix ifadesini postfixe çeviren programý yazýnýz.
//ilk metot iþimize yarar burada(ayný iþlem)


//4- (a / b + c) - ( d + e * f) verilen ifadeyi prefix'e çeviren programý yazýnýz.

void PrefixDonustur(char *girilen, char *prefix) {
    struct Yigin yigin;
    yigin.top = -1;
    char kopya1;
    int i = 0, j = 0;	
    strrev(girilen); // Ýçindeki stringi tersine çeviriyor.
    
     for(i=0, j=0; girilen[i]!='\0'; i++) {
        if(girilen[i] == '(') {
            girilen[i] = ')';
        }
        else if(girilen[i] == ')') {
            girilen[i] = '(';
        }
        if(!operator_kontrol(girilen[i])) {
            prefix[j++] = girilen[i];
        }
        else {
            if(girilen[i] == '(') {
                ElemanEkle(&yigin, girilen[i]);
            }
            else if(girilen[i] == ')') {
                while((kopya1 = ElemanCikar(&yigin)) != '(') {
                    prefix[j++] = kopya1;
                }
            }
            else {
                while(yigin.top != -1 && operator_onceligi(yigin.data[yigin.top]) >= operator_onceligi(girilen[i])) {
                    prefix[j++] = ElemanCikar(&yigin);
                }
                ElemanEkle(&yigin, girilen[i]);
            }
        }
    }
    
    while (yigin.top != -1)
        prefix[j++] = ElemanCikar(&yigin);
   
    strrev(prefix);
prefix[j] = '\0';
}




//5-Verilen ifade aðacý için, postfix ifadesini adým adým göstererek yazýnýz.

//ilk önce infix ifadeye çeviricem çünkü direkt olarak postfixe nasýl çevireceðimi bilmiyorum.
//aðacýn sol alt tarafýndan baþlayacaðým (a*b) þeklinde olucak.
//sonrasýnda sað alt kýsmýyla devam ediyorum (c-d) oluyor. Alt kýsým bitti bir üst basamaða çýkýyorum.
//(a*b)+(c-d) olarak üst basamaða çýkýyor ve infix halini bulmuþ oldum
//þimdi postfix haline çeviricem
//postfix halide ab*cd-+ þeklinde olucak 
//soldan saða yapmaya çalýþýrsak bu postfix ifadeyi:
//1- a*b cd-+
//2-(a*b)(c-d)+
//3-(a*b)+(c-d) þeklinde infixe dönüþebiliyor yani cevabýmýz =ab*cd-+


int main(int argc, char *argv[]) {
	
	//1.
	char infix[boyut] = "w*((x+y)-z)";
	char postfix[boyut]="";
	PostfixDonustur(infix, postfix);
    printf("%s\n", postfix);
    
	//2.
    char postfix2[boyut]="24*134-++";
    char infix2[boyut]="";
    PostfixiInfixeDonustur(postfix2,infix2);
    printf("%s\n",infix2);
	
	//3.
	char infix3[boyut] = "a+(b*c(d/e^f)*g)*h";
	char postfix3[boyut]="";
	PostfixDonustur(infix3, postfix3);
    printf("%s\n", postfix3);
    
	//4.
    char infix4[boyut] = "(a/b+c)-(d+e*f)";
	char prefix[boyut]="";
	PrefixDonustur(infix4, prefix);
    printf("%s\n", prefix);
	
	return 0;
}
