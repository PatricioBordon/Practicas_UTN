Algoritmo sin_titulo
	dimension num[10]
	Escribir "Ingresar lista de numeros "
	Para i<-0 Hasta 9 Con Paso 1 Hacer
		Leer num[i]
	FinPara
	Escribir "Numeros positivos: "
	Para i<-0 Hasta 9 Con Paso 1 Hacer
		Si num[i]>0 Entonces
			Escribir num[i]
		FinSi
	FinPara
FinAlgoritmo
