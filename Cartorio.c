#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�es

int main()
{
	int opcao=0;//Definindo vari�veis
	
	setlocale(LC_ALL, "Portuguese");//Definindo a linguagem
	
	printf("###Cart�rio da EBAC###\n\n");//in�cio do menu
	printf("Escolha a op��o desejada do menu:\n\n");
	printf("\t1 - Registrar nomes\n");
	printf("\t2 - Consultar nomes\n");
	printf("\t3 - Deletar nomes\n\n");
	printf("Op��o: ");//fim do menu
	
	scanf("%d", &opcao);//armazenando a escolha do usu�rio
	
	system("cls");
	
	if(opcao==1)//in�cio da sele��o
	{
		printf("Voc� escolheu o registro de nomes!");
	}
	if(opcao==2)
	{
		printf("Voc� escolheu consultar os nomes!");
	}
	if(opcao==3)
	{
		printf("Voc� escolheu deletar nomes!");
	}
	if(opcao>=4 || opcao<=0)
	{
		printf("Esta op��o n�o est� dispon�vel!");
	}//fim da sele��o
}
	

