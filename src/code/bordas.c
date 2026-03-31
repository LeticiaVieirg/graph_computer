#include "estruturaBasica.c"

typedef struct {
    unsigned int x;
    unsigned int y;
} ponto;

int main(){
    unsigned int b=20;

    Pixel rosa={225, 225,0};

    for (size_t j=0; j<H; j++){
        for (size_t i=0; i<W; i++){
            if(i==0 || j==0 || i== (W-1) || j== (H-1)){
                setPixel(i, j, rosa);
            }
            if(i<b || j<b || i> (W-b) || j> (H-b)){
                setPixel(i, j, rosa);
            }
        }
    }
}

