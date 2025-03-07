#include <stdio.h>
#include <time.h>
//funcion que calcula el factorial de un numero
long long int factorial_in_c(int number){
    if(number != 0){
        return number * factorial_in_c(number-1);
    }
    else{
        return 1;
    }

}
int main(){
    clock_t start, end;
    double cpu_time_used;
    start = clock(); //se inicia el clock, cuenta ciclos de relog
    printf("el numero es: %lld\n", factorial_in_c(20));
    end = clock(); //finalizado del clock, unidad son ciclos de reloj
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC; //se divide entre ciclos por segundo\
    //para sacar el tiempo de ejecucion 
    printf("Tiempo de ejecución: %f segundos\n", cpu_time_used);
}