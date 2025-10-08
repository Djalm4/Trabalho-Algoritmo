#include <stdio.h>
#include <string.h> //Para poder usar o strcmp

const char *EscolhaDoce(){
    
    int escolha;

    printf("Escolha um dos tipos de doces acima: ");
    scanf("%d", &escolha);

    switch(escolha){
        case 1:
            printf("\nDoce escolhido: Trufa Choc !");
            return "Trufa Choc";

        case 2:
            printf("\nDoce escolhido: Torta Limao !");
            return "Torta Limao";

        case 3:
            printf("\nDoce escolhido: Bolo Brig !");
            return "Bolo Brig";

        case 4:
            printf("\nDoce escolhido: Bolo Nutella !");
            return "Bolo Nutella";

        default:
            printf("\nEscolha inválida!");
            return NULL;
    }
}

float CalCompra(){

    const char *doce = EscolhaDoce();
    float quant ,compra = 0;

    printf("\nQuantos kilos de %s voce quer: ", doce);
    scanf("%f", &quant);

    if (strcmp(doce, "Trufa Choc") == 0) { //strcmp Função usada para comparar Strings, Pertence a biblioteca string.h
        
        if(quant <= 5.00){
            compra = quant * 35.00;
            return compra;    
        }
        else{
            compra = quant * 32.00; 
            return compra; 
        }
    }

    else if(strcmp(doce, "Torta Limao") == 0){

        if(quant <= 5){
            compra = quant * 34.45;
            return compra;
        }
        else{
            compra = quant * 32.25;
            return compra;
        }
    }

    else if(strcmp(doce, "Bolo Brig") == 0){

        if(quant <= 5){
            compra = quant * 45.00;
            return compra;
        }
        else{
            compra = quant * 40.00;
            return compra;
        }
    }

    else if(strcmp(doce, "Bolo Nutella") == 0){

        if(quant <= 5){
            compra = quant * 48.50;
            return compra;
        }
        else{
            compra = quant * 46.20;
            return compra;
        }
    }

    return compra;
}

int main(){

    printf("\n\t|----------------------------------------------------|\n");
    printf("\t|%-12s |%-12s |%-10s|%-10s|\n", "Tipo Doce", "Doce", "Ate 5Kg", "Acima de 5 KG");
    printf("\t|-------------|-------------|----------|-------------|\n");
    printf("\t|%-12d |%-12s |R$%-.2f KG| R$%-.2f KG  |\n", 1, "Trufa Choc", 30.00, 32.00);
    printf("\t|%-12d |%-12s |R$%-.2f KG| R$%-.2f KG  |\n", 2, "Torta Limao", 34.45, 32.25);
    printf("\t|%-12d |%-12s |R$%-.2f KG| R$%-.2f KG  |\n", 3, "Bolo Brig", 45.00, 40.00);
    printf("\t|%-12d |%-12s |R$%-.2f KG| R$%-.2f KG  |\n", 4, "Bolo Nutella", 48.50, 46.20);
    printf("\t|----------------------------------------------------|\n\n");

    float valor = CalCompra();

    printf("\nO total da sua compra foi de R$%.2f", valor);

    return 0;
}