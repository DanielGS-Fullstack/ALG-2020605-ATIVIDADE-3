#include <stdio.h>

// -------- FUNÇÕES --------

// Calcula horas, minutos e segundos
void calcularHMS(int totalSegundos) {

    int h = totalSegundos / 3600;
    int resto = totalSegundos % 3600;
    int m = resto / 60;
    int s = resto % 60;

    printf("\nResultado: %02d:%02d:%02d\n", h, m, s);
}

// Verifica se é par
int isPar(int n) {

    if(n % 2 == 0) {
        return 1;
    }

    return 0;
}

// Verifica se é ímpar
int isImpar(int n) {

    if(n % 2 != 0) {
        return 1;
    }

    return 0;
}

// Calcula média
float media(float a, float b) {

    return (a + b) / 2;
}

// Retorna maior
int maior(int a, int b) {

    if(a > b) {
        return a;
    }

    return b;
}

// Retorna menor
int menor(int a, int b) {

    if(a < b) {
        return a;
    }

    return b;
}

// -------- MAIN --------

int main() {

    int opcao;

    // Variáveis locais
    int val1, val2;
    float f1, f2;

    do {

        printf("\n===== MENU =====");
        printf("\n1 - Calcular H:M:S");
        printf("\n2 - Verificar Par");
        printf("\n3 - Verificar Impar");
        printf("\n4 - Media");
        printf("\n5 - Maior");
        printf("\n6 - Menor");
        printf("\n0 - Sair");

        printf("\nOpcao: ");
        scanf("%d", &opcao);

        switch(opcao) {

            case 1:

                printf("\nDigite os segundos: ");
                scanf("%d", &val1);

                calcularHMS(val1);

                break;

            case 2:

                printf("\nDigite um numero: ");
                scanf("%d", &val1);

                if(isPar(val1)) {
                    printf("\nEh PAR\n");
                }
                else {
                    printf("\nEh IMPAR\n");
                }

                break;

            case 3:

                printf("\nDigite um numero: ");
                scanf("%d", &val1);

                if(isImpar(val1)) {
                    printf("\nEh IMPAR\n");
                }
                else {
                    printf("\nEh PAR\n");
                }

                break;

            case 4:

                printf("\nDigite dois numeros: ");
                scanf("%f %f", &f1, &f2);

                printf("\nMedia = %.2f\n", media(f1, f2));

                break;

            case 5:

                printf("\nDigite dois numeros: ");
                scanf("%d %d", &val1, &val2);

                printf("\nMaior = %d\n", maior(val1, val2));

                break;

            case 6:

                printf("\nDigite dois numeros: ");
                scanf("%d %d", &val1, &val2);

                printf("\nMenor = %d\n", menor(val1, val2));

                break;

            case 0:

                printf("\nPrograma encerrado.\n");

                break;

            default:

                printf("\nOpcao invalida.\n");
        }

    } while(opcao != 0);

    return 0;
}
