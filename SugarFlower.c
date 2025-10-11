#include <stdio.h>
#include <string.h> //Para poder usar o strcmp

void Tabela(){
    printf("\n\t|----------------------------------------------------|\n");
    printf("\t|%-12s |%-12s |%-10s|%-10s|\n", "Tipo Doce", "Doce", "Ate 5Kg", "Acima de 5 KG");
    printf("\t|-------------|-------------|----------|-------------|\n");
    printf("\t|%-12d |%-12s |R$%-.2f KG| R$%-.2f KG  |\n", 1, "Trufa Choc", 30.00, 32.00);
    printf("\t|%-12d |%-12s |R$%-.2f KG| R$%-.2f KG  |\n", 2, "Torta Limao", 34.45, 32.25);
    printf("\t|%-12d |%-12s |R$%-.2f KG| R$%-.2f KG  |\n", 3, "Bolo Brig", 45.00, 40.00);
    printf("\t|%-12d |%-12s |R$%-.2f KG| R$%-.2f KG  |\n", 4, "Bolo Nutella", 48.50, 46.20);
    printf("\t|----------------------------------------------------|\n\n");
}

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

float CalCompra(const char *doce, float quant){

    if (strcmp(doce, "Trufa Choc") == 0) { //strcmp Função usada para comparar Strings, Pertence a biblioteca string.h
        
        if(quant <= 5.00){
            return quant = quant * 30.00;    
        }
        else{
            return quant = quant * 32.00; 
        }
    }

    else if(strcmp(doce, "Torta Limao") == 0){

        if(quant <= 5){
            return quant = quant * 34.45;
        }
        else{
            return quant = quant * 32.25;
        }
    }

    else if(strcmp(doce, "Bolo Brig") == 0){

        if(quant <= 5){
            return quant = quant * 45.00;
        }
        else{
            return quant = quant * 40.00;
        }
    }

    else if(strcmp(doce, "Bolo Nutella") == 0){

        if(quant <= 5){
            return quant = quant * 48.50;
        }
        else{
            return quant = quant * 46.20;
        }
    }

    else
        return 0;
}

void Dados(char nome[], const char *doce, float quant, float total){
    printf("\n------------------ DADOS COMPRA ------------------\n");
    printf("Cliente: %s\n", nome);
    printf("Doce: %s\n", doce);
    printf("Quantidade: %.2f Kg\n", quant);
    printf("Total pago: R$ %.2f\n", total);
    printf("---------------------------------------------------\n");
}

int main(){

    char nome[67];
    float quant, total;
    const char *doce;

    printf("Qual o nome do cliente: ");
    scanf("%[^\n]", nome); //Le até a quebra de linha

    Tabela();
    doce = EscolhaDoce();

    printf("\nQuantos kilos de doce voce quer: ");
    scanf("%f", &quant);

    total = CalCompra(doce, quant);

    Dados(nome, doce, quant, total);

    return 0;
}