#include <Arduino.h>

#include <string.h>  //* vai trabalhar com strlen, strcpy, strcat, strcmp, strchr
#include <stdlib.h>  //* atoi


void textoChar();
void textoString();

void setup()
 {
 Serial.begin(9600);
 Serial.println("  ");
 textoChar();
 textoString();
}

void loop() { 
}



void textoChar()
{
   const char* cidade = "Sao Paulo";
   //quando eu vejo um * significa que eu estou trabalhando com um endereco 
   Serial.println(cidade);
   int tamanhoTextoCidade = strlen(cidade);
   //! strlen conta os caracteres incluindo o /0 no final
   Serial.print( "comprimento do texto: ");
   Serial.println(tamanhoTextoCidade);

   int tamanhoVariavelCidade = sizeof(cidade);
   //! sizeof vai dizer o tamanho da variavel. 
    Serial.print("espaco ultilizado ");
    Serial.println(tamanhoVariavelCidade);


    char vetorTexto[]= {'s', 'a', 'y','u','r','i'};
    Serial.println(vetorTexto);


  const char* cidade1 = "sao Caetano";
  const char* cidade2 = "sao Caetano";

  if(strcmp(cidade1,cidade2) == 0 )
  //!compara o lexicamente as duas palavras
  Serial.println("os textos sao iguais");

  else
  Serial.print(" os textos sao diferentes"); 


  //! texto editavel com char

  char nomeAluno[20]= "thiagp";
 Serial.println(nomeAluno);

 //!alterando caracteres individualmente
 nomeAluno[6]= 'o';
 Serial.print(nomeAluno);

//! cuidado, o vetor precisa ter espaco o suficiente

strcpy(nomeAluno, "Felipe");
//!copiando outro texto para dentro do vetor
Serial.println(nomeAluno);

char frase[40]= "ola ";
strcat(frase, "Mundo! ");
//! junta dois textos em um so
Serial.println(frase);


//* procurqndo um caractere no texto 

char* posicaoLetra = strchr(frase, "m" );
//!encontra um caracter no texto 
if (posicaoLetra != NULL )
//! null = /0
{ Serial.println( "letra encontrada");
 Serial.println(posicaoLetra);
}
else
{Serial.println("letra nao encontrada");
}


//!convertendo texto numerico para inteiro 

char idadeTexto[ ] = "45"; // 52,53, /0
int idade = atoi(idadeTexto);
Serial.println(idade);



}
void textoString()
{

}