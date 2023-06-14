#include <stdio.h>
#include <stdlib.h>

int main(void){
    int nrows=5;
    int ncols=10;
    int row;
    int **rowptr;
    
    rowptr=malloc(nrows*sizeof(int *));
    if(rowptr==NULL){
        puts("\nPointer icin satir ayrilmadi.\n");
        exit(0);
    }
    
    printf("\n\n\nIndex Pointer(hex) Pointer(dec) .(dec)");
    for(row=0;row<nrows;row++){
        rowptr[row]=malloc(ncols*sizeof(int));
        if(rowptr[row]==NULL){
            printf("\nSatir icin yer ayrilmamasi [%d]\n",row);
            exit(0);
        }
        
        printf("\n%d %p %d", row, rowptr[row], (int)rowptr[row]);
        if(row>0){
            printf("%d",(int)(rowptr[row]-rowptr[row-1]));
        }
    }
    return 0;
}
