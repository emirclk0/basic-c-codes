#include <stdio.h>
#include <math.h>
int main(){
   
   
    float pi;
    
    for(int j=0;j<10000000;j++){
        pi+= 4*((pow(-1,j))/(2*j+1));
        
    }
    
    printf("%f",pi);

    return 0;
}
