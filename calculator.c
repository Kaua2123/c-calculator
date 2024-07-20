// bibliotecas padrão
#include <stdio.h>
#include <stdlib.h>

int main(void);
int calculator(char signal, int num1, int num2);

int calculator(char signal, int num1, int num2)
{
    // strings são representadas por aspas duplas.
    // caracteres únicos são representados por aspas simples.
    if (signal != '+' && signal != '-' && signal != '*' && signal != '/') {
        return printf("You entered an invalid value. You must enter a signal.");
    }

    if (signal == '+') {
        printf("You chose SUM\n");
        return num1 + num2;
    } 
    if (signal == '-') {
        printf("You chose SUBTRACTION\n");
        return num1 - num2;
    } 
    if (signal == '*') {
        printf("You chose MULTIPLICATION\n");
        return num1 * num2;
    } 
    if (signal == '/') {
        printf("You chose DIVISION\n");
        return num1 / num2;
    } 

    return 0;
}

int main(void)
{
    int num1 = 0, num2 = 0;
    char signal = '+'; 
    // variáveis do tipo char armazenam apenas um caractere.
    // caso queira trabalhar com uma string com mais de um caractere, é necessário criar um array de chars.
    // em outras linguagens, há o tipo string, que faz esse trabalho por baixo dos panos e facilita para o programador.

    printf("Enter a value for number1: ");
    scanf("%d", &num1);

    printf("Enter a value for number2: ");
    scanf("%d", &num2);

    printf("Choose an operation! \n");
    printf(" SUM x + y\n SUBTRACTION x - y\n MULTIPLICATION x * y\n DIVISION x / y\n");
    printf("Please, enter a signal to choose the operation. (+, -, *, /)\n");

    // espaço em branco dentro do scanf para ignorar o \n anterior
    scanf(" %c", &signal);

    int result = calculator(signal, num1, num2);
    printf("Result of calculation: %d", result);

    return 0;
}