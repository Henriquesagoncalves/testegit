#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�es

int registro()
{
	printf("Voc� escolheu o registro de nomes!\n");
	system("pause");
}

int consulta()

{
	printf("Voc� escolheu consultar os nomes!\n");
	system("pause");	
}

int deletar()
{
	printf("Voc� escolheu deletar nomes!\n");
	system("pause");
}

int main()
{
	int opcao=0;//Definindo vari�veis
	int laco=1;
	
	for (laco=1;laco=1;)
	{
	
		system("cls");
		
		setlocale(LC_ALL, "Portuguese");//Definindo a linguagem
	
		printf("###Cart�rio da EBAC###\n\n");//in�cio do menu
		printf("Escolha a op��o desejada do menu:\n\n");
		printf("\t1 - Registrar nomes\n");
		printf("\t2 - Consultar nomes\n");
		printf("\t3 - Deletar nomes\n\n");
		printf("Op��o: ");//fim do menu
	
		scanf("%d", &opcao);//armazenando a escolha do usu�rio
	
		system("cls");
		
		switch(opcao)
		{
			case 1:
			registro();
			break;
			
			case 2:
			consulta();
			break;
			
			case 3:
			deletar();
			break;
			
			default:
			printf("Esta op��o n�o est� dispon�vel!\n");
			system("pause");
			break;
				
		}
	
		
}
}
