Algoritmo sin_titulo
	Escribir '---------------------------'
	Escribir 'SUCESION DE FIBONACCI'
	Escribir '---------------------------'
	Leer n
	fibo = 0
	na = 1
	Para x<-1 Hasta n Con Paso 1 Hacer
		Escribir fibo
		cci = fibo+na
		fibo = na
		na = cci
	FinPara
FinAlgoritmo
