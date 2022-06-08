Algoritmo sin_titulo
	///6) Hacer un programa para ingresar por teclado 10 grupos compuestos por números
	///ordenados de menor a mayor. El final de cada grupo se detecta al ingresar un número
	///menor a su anterior.
	///Se debe obtener y emitir:
	///a) Para cada uno de los grupos la cantidad de números primos que lo componen.
	///b) El mínimo número par de cada uno de los grupos.
	///c) El anteúltimo y último número positivo de cada uno de los grupos.
	///Ejemplo de cómo se conforman los grupos:
	///-20, -5, 8, 2, 20, 35, 42, 12, 22, ........... ....80, 12, 24, 36, -5
	///Grupo 1 Grupo 2 Grupo 3  Grupo 10
	Para grupo<-1 Hasta 3 Con Paso 1 Hacer
		minimo = 0
		primos = 0
		conta = 0
		contador = 0
		anterior = 0
		anteultimo = 0
		ultimo = 0
		Leer n
		Mientras n>anterior Hacer
			c = 0
			Para i<-1 Hasta n Con Paso 1 Hacer
				Si n%i==0 Entonces
					c = c+1
				FinSi
			FinPara
			Si c==2 Entonces
				primos = primos+1
			FinSi
			anterior = n
			Si n%2==0 Entonces
				conta = conta+1
				Si conta>1 Entonces
					Si n<=minimo Entonces
						minimo = n
					FinSi
				SiNo
					minimo = n
				FinSi
			FinSi
			Si n>0 Entonces
				// yo puedo poner un == y saber ultimo y anteultimo en un caso comun
				contador = contador+1
				Si contador>1 Entonces
					Si n>=ultimo Entonces
						anteultimo = ultimo
						ultimo = n
					FinSi
				SiNo
					ultimo = n
				FinSi
			FinSi
			Leer n
		FinMientras
		Escribir 'Cantidad de numeros primos del grupo ',grupo,': ',primos
		Si minimo!=0 Entonces
			Escribir 'El minimo numero par del grupo ',grupo,': ',minimo
		SiNo
			Escribir 'El minimo numero par del grupo ',grupo,': no tiene'
		FinSi
		Escribir 'El anteultimo numero positivo del grupo ',grupo,': ',anteultimo
		Escribir 'El ultimo numero positivo del grupo ',grupo,': ',ultimo
	FinPara
FinAlgoritmo
