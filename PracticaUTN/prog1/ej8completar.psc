Algoritmo sin_titulo
	// 8) Dada una lista de números compuesta por grupos donde cada grupo está separado del
	// siguiente por un cero, y la lista de números finaliza cuando se ingresan dos ceros
	// consecutivos, se pide determinar e informar:
	// a) La cantidad de grupos en los que se detecten un total de 4 o más números primos
	// consecutivos. Se informa 1 resultado al final.
	// b) Para cada uno de los grupos en los que se haya detectado números negativos, el mayor y
	// el segundo mayor de los mismos y en qué posición estaban dentro del subgrupo. En los
	// grupos sin negativos, informar “Grupo sin negativos”. Se informan 4 resultados por cada
	// grupo.
	// c) El mayor número primo de todos los grupos, informando además en que grupo y en qué
	// posición del mismo fue detectado. Se informan 3 resultados al final.
	// Ejemplo de una posible lista: 5, 4, 3, 0, 18, -5, 20, 0, 7, 11, 25, 4, 0, 0.
	Leer n
	grupos = 0
	Mientras n!=0 Hacer
		c = 0
		segmayor = 0
		mayor = 0
		primos = 0
		Mientras n!=0 Hacer
			cont = 0
			Si n<0 Entonces
				Si c==1 Entonces
					prim = n
					posmayor = c
				SiNo
					Si c==2 Entonces
						Si (n>prim) Entonces
							possegmayor = c-1
							posmayor = c
							mayor = n
							segmayor = prim
						SiNo
							mayor = prim
							segmayor = n
							posmayor = c-1
							possegmayor = c
						FinSi
					SiNo
						Si n>mayor Entonces
							segmayor = mayor
							mayor = n
							posmayor = c
						SiNo
							Si n>segmayor Entonces
								segmayor = n
								possegmayor = c
							FinSi
						FinSi
					FinSi
				FinSi
			SiNo
				Para i<-1 Hasta n Con Paso 1 Hacer
					Si n%i==0 Entonces
						cont = cont+1
					FinSi
				FinPara
				Si cont==2 Entonces
					primos = primos+1
				SiNo
					primos = 0
				FinSi
				Si primos>=4 Entonces
					grupos = grupos+1
				FinSi
			FinSi
			c = c+1
			Leer n
		FinMientras
		Si c==0 Entonces
			Escribir 'Grupo sin negativos'
		SiNo
			Escribir 'Mayor numero negativo: ',mayor,' | Posicion: ',posmayor
			Escribir 'Mayor numero negativo: ',segmayor,' | Posicion: ',possegmayor
		FinSi
		Leer n
	FinMientras
FinAlgoritmo
