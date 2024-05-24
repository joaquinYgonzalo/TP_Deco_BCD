#include "Teclado.h"
#include "DecoBCD.h"
#include "MKL25Z4.h"
int main(){
    SIM->SCGC5|=SIM_SCGC5_PORTA_MASK;
    for(int i=0; i<8; i++){
        PORTA->PCR[contador[i]]|=PORT_PCR_MUX(1);
    }
    while (1){
       char teclas = tecla('a');
        deco7seg(tecla);
    }
    
}