Algoritmo sin_titulo
	Dimension num[5]
	Escribir 'Ingresar una lista de 5 numeros enteros'
	acum = 0
	Para i<-0 Hasta 4 Con Paso 1 Hacer
		Leer num[i]
		acum = acum+num[i]
	FinPara
	prom = acum/5
	cantidad = 0
	Para i<-0 Hasta 4 Con Paso 1 Hacer
		Si num[i]>prom Entonces
			cantidad = cantidad+1
		FinSi
	FinPara
	Escribir cantidad," numeros fueron mayores al promedio"
FinAlgoritmo
