Algoritmo sin_titulo
	dimension num[15]
	pertenece = falso
	Escribir "Cargar 15 numeros: "
	Para i<-0 Hasta 14 Con Paso 1 Hacer
		Leer num[i]
	FinPara
	Escribir "Ingresar un numero: "
	Leer n
	Para i<-0 Hasta 14 Con Paso 1 Hacer
		Si n==num[i] Entonces
			pertenece = verdadero
		FinSi
	FinPara
	Si pertenece==verdadero Entonces
		Escribir n," pertenece a la lista"
	FinSi
FinAlgoritmo
