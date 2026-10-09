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

//!

String nome = "thiago";
String curso = "arduino";
String mensagem= "ola";

//! concatenado string

mensagem=mensagem + "," + nome + "bem vindo ao curso de" + curso + ".";
Serial.println(mensagem);

//! tamanho do string 
int tamanhoMensagem = mensagem.length();
Serial.print("tamanho da string em letras:  ");
Serial.print( tamanhoMensagem);

//! acessando caractere em uma posicao especifica

char primeiraLetra = mensagem.charAt(0);
Serial.println("primeira Letra: ");
Serial.println(primeiraLetra);

//! ao inves de charAt, eh possivel acessar um colchetes 
char segundaLetra = mensagem[1];
Serial.println(segundaLetra);


//! procurando um texto dentro da string

int posicaoTextoProcurado = mensagem.indexOF(curso);
Serial.println(posicaoTextoProcurado);

//! extraindo um texto dentro a string 
int inicioNomeCurso = posicaoTextoProcurado + 9; //pocicao da palavra curso + 9 caracteres 
Serial.println(mensagem.substring(inicioNomeCurso, tamanhoMensagem));

//! substituindo texto dentro da string
mensagem.replace("Ola," , "oi tudo bom?")
Serial.println(mensagem);

//! convertendo para maiuscula
mensagem.toUpperCase();
Serial.println(mensagem);

//! convertendo tudo para minusculo
mensagem.toLowerCase();
Serial.println(mensagem);

//! convertendo texto numerico para inteiro
String textoNumero= "123";
int numero = textoNumero.toInt();
Serial.println(numero * 2);


//! verificando se a string esta vazia
String textovazio = " ";
if (textovazio.length()==0)
{Serial.println("o texto esta vazio");}



//! convertendo string para const char
//! isso eh util quando alguma biblioteca espera texto estilo C
const char* textoComoChar = mensagem.c_str();

}
void textoString()
{

}