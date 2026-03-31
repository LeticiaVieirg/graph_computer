#include "estruturaBasica.c"

typedef struct{
    int x;
    int y;
}Ponto;

void putPixel(Ponto, Pixel);

int main(){
    Pixel blue ={255,255,255};

    Ponto P1={0,0};
    Ponto P2={0, H-1}; 
    Ponto P3={W-1, H-1};
    Ponto P4={W-1, 0};

    putPixel(P1, blue);
    putPixel(P2, blue);
    putPixel(P3, blue);
    putPixel(P4, blue);

    printTela();
}

void putPixel(Ponto P1, Pixel P){
    setPixel(P1.x, P1.y, P);
}
