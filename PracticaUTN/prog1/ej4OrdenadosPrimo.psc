Algoritmo sin_titulo
	///Dada una lista de números enteros todos distintos entre sí y que finaliza con un cero,
	///determinar e informar con un cartel aclaratorio si los números primos que aparezcan en la
	///misma están ordenados de menor a mayor. Los números positivos primos pueden no ser
	///consecutivos, pero sí estar ordenados.
	///Por ejemplo:
	///4, 5, 7, 12, 13, 0 Se emite un cartel que diga Ordenados (5,7 y 13)
	///2, 10, 3, 5, 11, 7, 14, 0 Se emite un cartel que diga Desordenados (2, 3, 5, 11 y 7)
	mayor = 0
	primo = 0
	primero = 0
	ordenado = verdadero
	Repetir
		cont = 0
		Leer n
		Para i<-1 Hasta n Con Paso 1 Hacer
			Si n%i==0 Entonces
				cont = cont+1
			FinSi
		FinPara
		Si cont==2 Entonces
			primo = n
			primero = primero+1
			prim = verdadero
			Si primero==1 Entonces
				mayor = n
			FinSi
		SiNo
			prim = falso
		FinSi
		Si (prim==verdadero)&&(primero!=1) Entonces
			Si primo>mayor Entonces
				mayor = n
			SiNo
				ordenado = falso
			FinSi
		FinSi
	Mientras Que n!=0
	Si ordenado==verdadero Entonces
		Escribir 'ordenado'
	SiNo
		Escribir 'desordenado'
	FinSi
FinAlgoritmo
