algoritmo "ParOuImpar"
var
   N:Inteiro
   R:Caractere
   
Funcao ParOuImpar(V:Inteiro):Caractere
       Se(V%2=0)entao
          Retorne "PAR"
          
       Senao
            Retorne "Impar"
       FimSe

FimFuncao
inicio
      Escreva("Digite um numero: ")
      Leia(N)
      R:=ParOuImpar(N)
      
      EscrevaL("O Numero eh ", R)
fimalgoritmo