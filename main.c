#include <stdio.h>
#include <locale.h>
#include "lib/reader.h"

/**
 *  Inicializa o programa
 * 
 *  @param argc - contador de argumentos
 *  @param argv - array de argumentos
 */
int main (int argc, char ** argv) {

    setlocale(LC_ALL, "");

    // Caso o nome do arquivo não seja passado por argumento
    // imprime uma mensagem de erro e termina o programa
    if(argc == 1) {
        init("");
        return 0;
    }
    
    // Chama o leitor
    int count = init(argv[1]);
    
    // Imprime o resultado
    if (count != -1)
        printf("Resultado: %d", count);
    else
        return -1;
    
    return 0;
}



