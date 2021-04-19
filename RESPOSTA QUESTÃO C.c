#include <stdio.h>
#include <cs50.h>
#include <math.h>

//FELIPE VINICIUS PEDRO DOS SANTOS
//ATIVIDADE DE PROGRAMAÇÃO E CALCULO NUMERICO
//DATA: 19/04/2021

int main(void) //inicio da linha de código
{
    int operacao; //definindo variavel de operação para o calculo da conversao
    char sair = false; //definindo variavel genérica para o loop do/while

    printf("Conversor de temperatura v1.0\n");
    //título do programa

    do //inicio do loop do/while
    {    
        int T = get_int("\nQual a temperatura?\n"); 
        //definindo variavel do valor da temperatura para calculo posterior
        char resposta = get_char("Qual a escala da temperatura, Celsius ou Fahrenheit? [C/F]: \n");
        //definindo variavel da unidade de temperatura para saber qual formula aplicar de acordo com a resposta

        if (resposta == 'c' || resposta == 'C')
        {
            operacao = (((T * 9) / 5) + 32);
        }
        //se a escala de temperatura atual for celsius, aplicar formula de conversão para fahrenheit

        if (resposta == 'f' || resposta == 'F')
	    {
            operacao = (((T - 32) * 5) / 9);
        }
        //se a escala de temperatura atual for fahrenheit, aplicar formula de conversão para celsius
        
        printf("\nO resultado da conversão é: %i\n\n", operacao);
        //imprimir na tela o valor adquirido pela variavel "operação" de acordo com a formula aplicada

        char final = get_char("Deseja fazer mais uma operação? (S/N): ");
        if (final == 'n' || final == 'N')
        {
            sair = true;
        }
        //definindo variavel para o programa decidir se continua o loop do/while ou termina sua execução
    }
    while (sair == false);
}

//CODIGO COPILADO E TESTADO
