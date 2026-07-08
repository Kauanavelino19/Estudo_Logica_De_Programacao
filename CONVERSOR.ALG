algoritmo "Conversor"
var
   angulo, S: Real
inicio
      Escreva("Informe um Angulo: ")
      Leia(angulo)
      S <- Sen(GraupRad(angulo))
      
      EscrevaL("O seno de ", angulo, " e igual a ", S)
fimalgoritmo