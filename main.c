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
        printf("\n\tErro: Nome do arquivo não informado\n\n");
        return 0;
    }
    
    // Chama o leitor
    enum status status = init(argv[1]);

    // analisa o retorno e imprime o contador na tela se um erro não foi encontrado             
    switch(status) {
        case FOPENERR:
            printf("\n\tErro: Arquivo não existe\n\n");
            break;
        case INVFIRSTERR:
            printf("\n\tErro: Primeira linha não foi formatada corretamente\n\n");
            break;
        case MUST2ERR:
            printf("\n\tErro: Arquivo precisa ter 2 ou mais linhas\n\n");
            break;
        case ALLRIGHT:
            printf("Resultado: %d", args_.count);
    }
    
    return 0;
}



