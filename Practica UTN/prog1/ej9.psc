Algoritmo sin_titulo
	contador = 0
	Leer n
	max = n
	Mientras n!=0 Hacer
		contador = contador+1
		Si n>max Entonces
			posicion = contador
			max = n
		FinSi
		Leer n
	FinMientras
	Escribir "Maximo: ",max
	Escribir "Posicion: ",posicion
FinAlgoritmo
