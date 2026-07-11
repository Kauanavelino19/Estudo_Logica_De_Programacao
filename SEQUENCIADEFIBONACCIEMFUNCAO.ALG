algoritmo "SequenciaDeFibonacciEmFuncao"
var
   F1,F2,F3, C:Inteiro
Funcao SequenciaDeFibonacci(Var A,B:Inteiro):Inteiro
var  FT: Inteiro
inicio
       FT:= A+B
       A:= B
       B:= FT
       
       Retorne FT

FimFuncao
inicio
     F1:=0
     F2:=1
     Escreva(F1, " ")
     Escreva(F2, " ")
     Para C := 3 ate 10 faca
          F3:= SequenciaDeFibonacci(F1, F2)
          Escreva(F3, " ")
     FimPara

fimalgoritmo