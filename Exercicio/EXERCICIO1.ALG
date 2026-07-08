algoritmo "Exercicio1"
var
   N1, N2, Soma, Menos, Mult: Inteiro
   Media: Real
inicio
      Escreva("informe um numero: ")
      Leia(N1)
      
      Escreva("Informe outro numero: ")
      Leia(N2)
      
      Soma <- N1 + N2
      
      Menos <- N1 - N2
      
      Mult <- N1 * N2
      
      Media <- (N1 + N2) / 2
      
      EscrevaL("A soma entre ", N1, " e ", N2, " eh ", Soma)
      
      EscrevaL("O menos entre ", N1, " e ", N2, " eh ", Menos)
      
      EscrevaL("A multiplicação entre ", N1, " e ", N2, " eh ", Mult)
      
      EscrevaL("A media entre ", N1, " e ", N2, " eh ", Media)
fimalgoritmo