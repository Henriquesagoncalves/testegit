#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocações de texto por regiões

int main()
{
	int opcao=0;//Definindo variáveis
	int x=1;
	
	for (x=1;x=1;)
	{
		system("cls");
		setlocale(LC_ALL, "Portuguese");//Definindo a linguagem
	
		printf("###Cartório da EBAC###\n\n");//início do menu
		printf("Escolha a opção desejada do menu:\n\n");
		printf("\t1 - Registrar nomes\n");
		printf("\t2 - Consultar nomes\n");
		printf("\t3 - Deletar nomes\n\n");
		printf("Opção: ");//fim do menu
	
		scanf("%d", &opcao);//armazenando a escolha do usuário
	
		system("cls");
	
		if(opcao==1)//início da seleção
		{
		printf("Você escolheu o registro de nomes!\n");
		system("pause");
		}
		if(opcao==2)
		{
		printf("Você escolheu consultar os nomes!\n");
		system("pause");
		}
		if(opcao==3)
		{
		printf("Você escolheu deletar nomes!\n");
		system("pause");
		}
		if(opcao>=4 || opcao<=0)
		{
		printf("Esta opção não está disponível!\n");
		system("pause");
		}//fim da seleção
	}
}
	

