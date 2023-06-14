#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int **rptr;
int *aptr;

int testptr; 

int k;
int nrows=5; //Hem nrows hem de ncols deðerlendirilebilir
int ncols=8;
int row,col;

//Dizi icin hafizadan yer ayrilmasi
aptr=malloc((nrows*ncols)*sizeof(int));
if(aptr==NULL){
puts("\nDizi icin yer ayrilmadi");
exit(0);
}

// pointer lar icin yer ayrilmadi
rptr=malloc(nrows*sizeof(int*));
if(rptr==NULL){
puts("\nPointerlar icin yer ayrilmadi");
exit(0);
}

// pointerþar isaretlenir
for(k=0;k<nrows;k++)
{
rptr[k]=aptr+(k*ncols);
}

// satir pointerlarinin nasil artýrýþdýðý gösteriþlir
printf("\n\npointerlarin arttirilmasi");
printf("\n\nIndex Pointer(hex).(dec)");
for(row=0;row<nrows;row++){
printf("\n%d %p",row,rptr[row]);
if(row>0)
printf(" %d",(rptr[row]-rptr[row-1]));
}
printf("\n\nDizinin yazdirilmasi\n");
for(row=0;row<nrows;row++){
 for(col=0;col<ncols;col++){
  rptr[row][col]=row+col;
  printf("%d",rptr[row][col]);
  }
putchar('\n');
}
puts("\n");

//Burada bitisik bir bellek blogunda 2 boyutlu bir dizi ile ugrasildigi gösterilir.
printf("ve simdi bellekte bitisik olduklari gosterilir\n");
testptr=aptr;
for(row=0;row<nrows;row++){
 for(col=0;col<ncols;col++){
  printf("%d ",(testptr++));
}
putchar('\n');
}

return 0;
}
