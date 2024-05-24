#include "DecoBCD.h"
#include "MKL25Z4.h"
int i;

/*
PIN EN 1 o 0 -> PTx->PSOR(1u<<n);
                      |
                      ---->Pin Set Output Register
*/
int contador [4]={1, 2, 3, 4};
int display[10][7]={
//   a  b  c  d  e  f  g
    {1, 1, 1, 1, 1, 1, 0},//0
    {0, 1, 1, 0, 0, 0, 0},//1
    {1, 1, 0, 1, 1, 0, 1},//2
    {1, 1, 1, 1, 0, 0, 1},//3
    {0, 1, 1, 0, 0, 1, 1},//4
    {1, 0, 1, 1, 0, 1, 1},//5
    {1, 0, 1, 1, 1, 1, 1},//6
    {1, 1, 1, 0, 0, 0, 0},//7
    {1, 1, 1, 1, 1, 1, 1},//8
    {1, 1, 1, 1, 0, 1, 1}//9
};
void deco7seg(char num){
        
    switch(num){
        case '0':
        for(i=0;i<7;i++){
            PTA->PSOR|=(display[0][i]<<contador[i]);
        }
     break;
             case '1':
        for(i=0;i<7;i++){
            PTA->PSOR|=(display[1][i]<<contador[i]);
        }
     break;
             case '2':
        for(i=0;i<7;i++){
            PTA->PSOR|=(display[2][i]<<contador[i]);
        }
     break;       
      case '3':
        for(i=0;i<7;i++){
            PTA->PSOR|=(display[3][i]<<contador[i]);
        }
     break;      
       case '4':
        for(i=0;i<7;i++){
            PTA->PSOR|=(display[4][i]<<contador[i]);
        }
     break;       
      case '5':
        for(i=0;i<7;i++){
            PTA->PSOR|=(display[5][i]<<contador[i]);
        }
     break;
     case '6':
        for(i=0;i<7;i++){
            PTA->PSOR|=(display[6][i]<<contador[i]);
        }
     break;
     case '7':
        for(i=0;i<7;i++){
            PTA->PSOR|=(display[7][i]<<contador[i]);
        }
     break;
     case '8':
        for(i=0;i<7;i++){
            PTA->PSOR|=(display[8][i]<<contador[i]);
        }
     break;
     case '9':
        for(i=0;i<7;i++){
            PTA->PSOR|=(display[9][i]<<contador[i]);
        }
     break;

    }
     

    
}
