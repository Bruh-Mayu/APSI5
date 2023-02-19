/******************************************************************************/******************************************************************************

7. Uma data pode ser descrita por três números inteiros, para armazenar o dia, o mês e o ano:
a. Crie uma estrutura chamada Data para armazenar datas com esses campos.
b. Faça um programa que leia um vetor de 5 datas do teclado e imprima o resultado.

*******************************************************************************/

/*
Faça uma manutenção em um programa

- Identifique o programa e registre a linguagem em que é feito, o número de arquivos e o número total de linhas de código:
R: Programa para armazenar 5 datas feito em C++, contendo um único arquivo com 66 linhas (contando linhas em branco)


- Registre quanto tempo você demorou para entender o programa:
R: 7:10.52

- Escolha uma alteração a ser feita e registre quanto tempo você demorou para planejar como ela será feita:
R: Alterar a verificação dos números inseridos, tempo gasto de planejamento foi 4:25.20

- Registre quanto tempo você demorou para efetuar a alteração
- Registre quanto tempo você demorou para verificar se a alteração foi feita corretamente
R: A alteração e teste foi feito junto e levou 14:40.15
*/

#include <iostream>

using namespace std;

struct Data{
    int dia;
    int mes;
    int ano;
    
    int lerDia(){
        do {
        	cout<<"Digite o dia: ";
        	cin>> this -> dia;
        
        	if( this -> dia < 1 || this -> dia > 31)
        	{
            	imprimirAviso();
        	}
		}while( this -> dia < 1 || this -> dia > 31);
        return this -> dia;
    }
    
    int lerMes(){
    	do{
	        cout<<"Digite o mes: ";
	        cin>> this ->mes;
	        if(this -> mes < 1 || this -> mes > 12)
	        {
	            imprimirAviso();
	        }
		}while( this -> mes < 1 || this -> mes > 12);
        return this -> mes;
    }
    
    int lerAno(){
    	do{
    		cout<<"Digite o ano: ";
    		cin>> this -> ano;
    		if(this -> ano < 1)
	        {
	            imprimirAviso();	            
	        }
		}while( this -> ano < 1);
        return this -> ano;
    }
    
    void imprimirAviso(){
    	cout<<"data incorreta, insira uma data valida!"<<endl;
	}
    
    void imprimirData(){
        cout<< this -> dia <<"/"<< this -> mes <<"/"<< this -> ano <<endl;
    }
};

int main()
{
    Data dates[5];
    int i;

    for(i = 1; i <= 5; i++)
    {
        cout<<"DATA "<< i <<endl;
        dates[i].lerDia();
        dates[i].lerMes();
        dates[i].lerAno();
        dates[i].imprimirData();        
    }
}

/*
Criado por Thais e alterador por Bruna
*/
