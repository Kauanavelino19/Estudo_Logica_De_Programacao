algoritmo "Exercicio de Fibonacci"
var
   F1,F2,Fn, i, limite:Inteiro
inicio
      Escreval("==========================")
      EscrevaL("SEQUENCIA DE FIBONACCI ")
      EscrevaL("==========================")
      
      //EscrevaL("Digite um numero: ")
      //Leia (limite)
      F1:= 0
      F2:= 1
      Escreva(F1," ",F2," ")
      Para i := 3 ate 15 faca
           Fn := F1+F2
           F1:= F2
           F2:= Fn
           Escreva(Fn, " ")
      FimPara

fimalgoritmo