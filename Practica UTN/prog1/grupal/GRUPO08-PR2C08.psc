Algoritmo sin_titulo
	Leer n
	contador = 1
	i = 1
	Mientras (contador<=n) Hacer
		i = 1+i
		Si (i%2==0)&(i%5==0)&(i%3!=0) Entonces
			Escribir i
			contador = contador+1
		FinSi
	FinMientras
FinAlgoritmo
