algoritmo "SomaParametrosReferencia"
var
   X,Y:Inteiro
   
Procedimento Soma (var A,B:Inteiro)
Inicio
      A := A+1
      B := B+2
      EscrevaL("Valor de A = ", A)
      EscrevaL("Valor de B = ", B)
      EscrevaL("Soma A+B = ", A+B)
FimProcedimento
inicio
      Escreva("Digite X: ")
      Leia(X)
      Escreva("Digite Y: ")
      Leia(Y)
      Soma(X,Y)
      EscrevaL("Valor de X = ", X)
      EscrevaL("Valor de Y = ", Y)
      
fimalgoritmo