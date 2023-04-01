#include <stdio.h>
#include <ctype.h>

int main(){
    float peso, altura, imc;
    char genero;

    printf("Digite o seu Genero (H/M): ");
    scanf("%c", &genero);

    printf("Digite o seu peso em Kg: ");
    scanf("%f", &peso);

    printf("Digite a sua altura em metros: ");
    scanf("%f", &altura);

    imc = peso / (altura*altura);

    genero = tolower(genero);
    printf("\nIMC: %.2f\n", imc);
    if( genero == 'h'){
        if ( imc < 20){
            printf("\nABAIXO DO PESO\n");
            }else if (imc < 25){
                printf("\nNORMAL\n");
                }else if (imc < 30){
                    printf("\nOBESIDADE LEVE\n");
                    }else if (imc < 40){
                        printf("\nOBESIDADE MODERADA\n");
                        }else {
                            printf("\nOBESIDADE MORBIDA\n");
                            }
    }else if (genero == 'm'){
        if ( imc < 19){
            printf("\nABAIXO DO PESO\n");
            }else if (imc < 24){
                printf("\nNORMAL\n");
                }else if (imc < 29){
                    printf("\nOBESIDADE LEVE\n");
                    }else if (imc < 39){
                        printf("\nOBESIDADE MODERADA\n");
                        }else {
                            printf("\nOBESIDADE MORBIDA\n");
                            }
    } else {
        printf("GENERO INVALIDO");
        }

    return 0;
}
