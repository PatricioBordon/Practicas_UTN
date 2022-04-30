Algoritmo sin_titulo
	///Ejercicio: Dada una lista de números que finaliza cuando se ingresa un cero, informar cual es el
	///primer y último número impar ingresado.
	///Ejemplo 8, 4, -5, 6, 9, 5, 18, 0 se informa -5 y 5.
	primer = falso
	ulti = falso
	Mientras N!=0 Hacer
		Leer N
		Si primer==falso Entonces
			Si N%2!=0 Entonces
				primer = verdadero
				PrimerImpar = N
			FinSi
		SiNo
			Si N%2!=0 Entonces
				UltimoImpar = N
				ulti = verdadero
			FinSi
		FinSi
	FinMientras
	Si ulti==verdadero&&primer==verdadero Entonces
		Escribir UltimoImpar
		Escribir PrimerImpar
	SiNo
		Si ulti==falso&&primer==verdadero Entonces
			Escribir PrimerImpar
		FinSi
	FinSi
	Escribir PrimerImpar
	Escribir UltimoImpar
FinAlgoritmo
