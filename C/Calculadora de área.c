//
//  main.c
//  exercicio 2 curso de linguagem C para iniciantes
//
//  Calculadora de área
//
//  Created by Fernando on 24/09/16.
//  Copyright © 2016 Fernando. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

//declarando as variaveis

float id, base, altura, result;
int op;
int main()
{
    
    printf("\nCalculadora de áreas\n");
    printf("\n\nEscolha a figura geométrica:\n\n1- Triângulo\n2- Quadrado\n3- Retângulo\n");
    scanf("%d",&op);
    
    switch (op){
            
        case 1:{
            result = (base*altura)/2;
            printf("A área do triangulo é: %.2f",result);
            break;
        }
            
        case 2:{
            result = id*id;
            printf("A área do quadrado é: %.2f",result);
            break;
        }
        case 3:{
            result = base*altura;
            printf("A área do retângulo é: %.2f",result);
            break;
        }
                    
        default:{
            
            printf("\nOperação invalida!\n");
        }
            
    }

    system("pause");
    
}
