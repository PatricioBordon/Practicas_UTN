Algoritmo factorial
	Escribir 'Factorial'
	Leer n
	resul = fact(n)
	Escribir resul
FinAlgoritmo

Funcion operacion = fact(n)
	operacion = 1
	Para i<-1 Hasta n Con Paso 1 Hacer
		operacion = i*operacion
	FinPara
FinFuncion
