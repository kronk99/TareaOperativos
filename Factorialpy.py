import time
#funcion que retorna el factorial de un numero
def factorial_python(numero):
    if numero != 0:
        return numero * factorial_python(numero-1)
    else:
        return 1
def main():
    # Inicia el contador de tiempo
    start_time = time.time()
    print("el numero es",factorial_python(100))
    # finaliza el contador de tiempo
    end_time = time.time()

    # Calcular el tiempo de ejecución
    execution_time = end_time - start_time #diferencia de tiempos
    print(f"Tiempo de ejecución: {execution_time} segundos")

main()