Algoritmo sin_titulo
	// Hacer un programa para ingresar por teclado 5 grupos compuestos por números
	// ordenados de menor a mayor. El final de cada grupo se detecta al ingresar un número
	// menor a su anterior.
	// Se debe obtener y emitir:
	// a) Para cada uno de los grupos la cantidad de números primos que lo componen. Se informa
	// 1 resultado por cada grupo.
	// b) El menor número par de cada uno de los grupos. Se informa 1 resultado por cada grupo.
	// c) El anteúltimo y último número positivo de cada uno de los grupos. Se informan 2
	// resultados por cada grupo.
	// Ejemplo de cómo se conforman los grupos:
	// -20, -5, 8, 2, 20, 35, 42, 12, 22, 23, 7, 12, 18, 23, 80, 12, 24, 36, -5
	// Grupo 1 Grupo 2 Grupo 3 Grupo 4 Grupo 5
	Para i<-1 Hasta 5 Con Paso 1 Hacer
		Escribir 'inicio'
		Leer n
		Escribir 'inicio grupo',i
		Repetir
			Escribir 'inicio adentro'
			anterior = n
			Leer n
		Mientras Que n>anterior
		Escribir 'fin grupo',i
		anterior = n
	FinPara
	Escribir 'fin ciclo afuera'
FinAlgoritmo
