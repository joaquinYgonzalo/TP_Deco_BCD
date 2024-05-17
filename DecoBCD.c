#include "DecoBCD.h"
#include "MKL25Z4.h"
int display[7][10]={
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
        case '1':
     for(int i=0; i<7; i++){
        PORTA->PCR[display[i]]|=PORT_PCR_MUX(1);
     }
    }
     

    
}