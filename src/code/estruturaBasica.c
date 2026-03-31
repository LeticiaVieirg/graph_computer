#include <stdio.h>

#define MAX_COLORS 256
#define W 800
#define H 600

typedef unsigned int color;

typedef struct{
    color r;
    color g;
    color b;
} Pixel;

Pixel tela[W][H];

void setPixel(int x, int y, Pixel p){
    if(x>=0 && x<W && y>=0 && y<H)
        tela[x][y]=p;  
    else
        fprintf(stderr, "Erro: Invalid position.");
}

void printCabecalho(){
    printf("P3");
    printf("%d %d\n",W,H);
    printf("%d\n", MAX_COLORS - 1);
}

void printPixel(int x, int y){
    Pixel p = tela[x][y];
    printf("%d %d %d", p.r, p.g, p.b);
}

void printTela(){
    for(int i=0; i<W; i++){
        for (size_t j = 0; j < H; j++){
            printPixel(i,j);
        }
    }
}
