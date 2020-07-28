#include <stdio.h>
#include <stdlib.h>

int main()
{
	char nome[30];
	int frete;
	int valorfrete[5] = {10, 15, 20, 25, 30};
	float precos[9] = {20, 22, 18, 15, 12, 49.5, 28, 21, 10}; 
	float total = 0;
	int i = 0;
	int quantidade[9];
	for (i=0; i<9; i++){
		quantidade[i]=0;
	}//Este for serve para definir valores 0 para o vetor quantidade, para que no final faça o cálculo correto.
	
	printf ("\t\t\t\t\t\t--- MyTech ---");
	printf ("\n\nBem vindo ao MyTech, o site ideal para comprar seus livros sobre tecnologia.\n\n");
	printf ("Como voce se chama?\n\n");
	fgets (nome, 30, stdin);
	fflush (stdin);
	
	printf ("\nEscolha sua regiao para calculo do frete\n"); // Esta é a parte do programa que é responsável pelo cálculo do frete até a residencia do comprador. 
	printf ("\n1. Sudeste \n2. Sul \n3. Centro-Oeste \n4. Nordeste \n5. Norte\n\n"); // Optamos por utilizar Swith Case pois definimos valores fixos para diferentes regiões
	scanf ("%d", &frete);
	
	switch (frete)
	{
		case 1:
		printf ("\nO frete para a regiao Sudeste custa R$%d\n", valorfrete[0]);
		frete = valorfrete[0];
		break;
		
		case 2:
		printf ("\nO frete para a regiao Sul custa R$%d\n", valorfrete[1]);
		frete = valorfrete[1];
		break;
		
		case 3:
		printf ("\nO frete para a regiao Centro-Oeste custa R$%d\n", valorfrete[2]);
		frete = valorfrete[2];
		break;
		
		case 4:
		printf ("\nO frete para a regiao Nordeste custa R$%d\n", valorfrete[3]);
		frete = valorfrete[3];
		break;
		
		case 5:
		printf ("\nO frete para a regiao Norte custa R$%d\n", valorfrete[4]);
		frete = valorfrete[4];
		break;
	}
		
	
	while (i!=0){
		printf ("\nSr(a). %sEscolha o livro que deseja:\n", nome);
		printf ("\n1. Data Science para Iniciantes ---------------------------------------------------------------------------- R$20.00");
		printf ("\n2. Algoritmos e Programacao -------------------------------------------------------------------------------- R$22.00");
		printf ("\n3. Curso de Python ----------------------------------------------------------------------------------------- R$18.00");
		printf ("\n4. Fundamentos de HTML5 e CSS3 ----------------------------------------------------------------------------- R$15.00");
		printf ("\n5. Guia para Excel e VBA ----------------------------------------------------------------------------------- R$12.00");
		printf ("\n6. Programacao em Baixo Nivel ------------------------------------------------------------------------------ R$49.50");
		printf ("\n7. Fundamentos de Sistemas de Informacao ------------------------------------------------------------------- R$28.00");
		printf ("\n8. Arduino Basico ao Avancado ------------------------------------------------------------------------------ R$21.00");
		printf ("\n9. Curso de Linux para Iniciantes -------------------------------------------------------------------------- R$10.00");
		printf ("\n0. Sair e Finalizar\n");
		scanf ("%d", &i);
	
		if (i > 0 && i < 10){
			printf ("\nQuantos do item %d voce deseja?\n", i);//Repetindo a pergunta para cada item da lista escolhido.
			scanf ("%d", &(quantidade[i-1]));//O -1 é utilizado pois o item 1 corresponde a posição 0 do array.
		}else if (i!=0){
			printf ("\nOpcao invalida. Digite um numero entre 0 e 9.\n");
		}
	}
	
	for (i=0; i<9; i++){
		total += precos[i] * quantidade[i];
	}//o calculo do total esta em outra estrutura para considerar os casos em que o usuário resolve trocar a quantidade de um dos itens que já foram escolhidos.
	
	printf ("Sr(a). %sO total da sua compra eh de: R$%.2f\n", nome, total + frete);
	printf ("\nEstamos redirecionando o sr(a) para o Pagseguro da Uol\n"); 
	
	system ("pause");
	return 0;
}
