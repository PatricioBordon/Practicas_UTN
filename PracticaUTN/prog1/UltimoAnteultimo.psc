Algoritmo sin_titulo
	Leer n
	ultimo = n
	Mientras n!=0 Hacer
		Si n>=anteultimo Entonces
			anteultimo = ultimo
			ultimo = n
		SiNo
			Si n<=ultimo Entonces
				anteultimo = ultimo
				ultimo = n
			FinSi
		FinSi
		Leer n
	FinMientras
	Escribir ultimo
	Escribir anteultimo
FinAlgoritmo
