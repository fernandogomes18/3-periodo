//
//  main.c
//  exercicio 1 curso de linguagem C para iniciantes
//
//  Calculadora usando switch case
//
//  Created by Fernando on 24/09/16.
//  Copyright © 2016 Fernando. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

//declarando as variaveis

float v1, v2, result;
int op;

int main()
{
    
    printf("\nCalculadora em C\n");
    printf("\nDigite o Primeiro valor: ");
    scanf("%f",&v1);
    printf("\nDigite o Segundo valor: ");
    scanf("%f",&v2);
    printf("\n\nEscolha a operação:\n\n1-Soma\n2-Subtração\n3-Multiplicação\n4-Divisão\n");
    scanf("%d",&op);
    
    switch (op){
            
            case 1:{
                    result = v1+v2;
                    printf("O resultado da soma é: %.2f",result);
                    break;
            }
        
            case 2:{
                    result = v1-v2;
                    printf("O resultado da subtração é: %.2f",result);
                    break;
            }
            case 3:{
                    result = v1*v2;
                    printf("O resultado da multiplicação é: %.2f",result);
                    break;
            }
            case 4:{
                    result = v1+v2;
                    printf("O resultado da soma é: %.2f",result);
                    break;
            }
            
            default:{
            
                    printf("\nOperação invalida!\n");
            }
            
        }
            printf("\n");
        system("pause");
    
}
