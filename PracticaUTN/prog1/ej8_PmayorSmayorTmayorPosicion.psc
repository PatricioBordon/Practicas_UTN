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
	ngrupo = 0
	primero = verdadero
	MayorPrimo = 0
	Mientras n!=0 Hacer
		Si n!=0 Entonces
			consecutivo = 0
			cGrupo = 0
			ngrupo = ngrupo+1
			maxNeg = 0
			maxNeg2 = 0
			maxNeg3 = 0
			PosMaxneg3 = 0
			PosMaxneg = 0
			PosMaxneg2 = 0
			pos = 0
			cPrimo = 0
			negativos = 0
		FinSi
		Mientras n!=0 Hacer
			c = 0
			pos = pos+1
			Si n<0 Entonces
			
			FinSi
			Para i<-1 Hasta n Con Paso 1 Hacer
				Si n%i==0 Entonces
					c = c+1
				FinSi
			FinPara
			Si c==2 Entonces
				Si primero=verdadero Entonces
					MayorPrimo = n
					posPrimo = pos
					primero = falso
				SiNo
					Si n>MayorPrimo Entonces
						MayorPrimo = n
						posPrimo = pos
						grupoM = ngrupo
					FinSi
				FinSi
				cPrimo = cPrimo+1
			SiNo
				cPrimo = 0
			FinSi
			// mayor y segundo mayor con posicion
			Si n<0 Entonces
				negativos = negativos+1
				Si maxNeg==0 Entonces
					maxNeg = n
					PosMaxneg = pos
				SiNo
					Si maxNeg2==0 Entonces
						Si maxNeg>n Entonces
							maxNeg2 = n
							PosMaxneg2 = pos
						SiNo
							maxNeg2 = maxNeg
							PosMaxneg2 = PosMaxneg
							maxNeg = n
							PosMaxneg = pos
						FinSi
					SiNo
						Si maxNeg3==0 Entonces
							Si maxNeg>n Entonces
								maxNeg3 = n
								PosMaxneg3 = pos
							SiNo
								Si maxNeg2>n Entonces
									maxNeg3 = n
									PosMaxneg3 = pos
								SiNo
									maxNeg3 = maxNeg2
									PosMaxneg3 = PosMaxneg2
									maxNeg2 = maxNeg
									PosMaxneg2 = PosMaxneg
									maxNeg = n
									PosMaxneg = pos
								FinSi
							FinSi
						SiNo
							Si n>maxNeg Entonces
								maxNeg3 = maxNeg2
								PosMaxneg3 = PosMaxneg2
								maxNeg2 = maxNeg
								PosMaxneg2 = PosMaxneg
								maxNeg = n
								PosMaxneg = pos
							SiNo
								Si n>maxNeg2 Entonces
									maxNeg3 = maxNeg2
									PosMaxneg3 = PosMaxneg2
									maxNeg2 = n
									PosMaxneg2 = pos
								SiNo
									Si n>maxNeg3 Entonces
										maxNeg3 = maxNeg2
										PosMaxneg3 = PosMaxneg2
									FinSi
								FinSi
							FinSi
						FinSi
					FinSi
				FinSi
			FinSi
			Leer n
		FinMientras
		Si cPrimo>=4 Entonces
			cGrupo = cGrupo+1
		FinSi
		Escribir 'GRUPO: ',ngrupo
		Si negativos==0 Entonces
			Escribir 'Grupo sin negativos'
		SiNo
			Si maxNeg!=0 Entonces
				Escribir 'Primer Mayor: ',maxNeg,' | Posicion: ',PosMaxneg
			FinSi
			Si maxNeg2!=0 Entonces
				Escribir 'Segundo Mayor: ',maxNeg2,' | Posicion: ',PosMaxneg2
			FinSi
			Si maxNeg3!=0 Entonces
				Escribir 'Tercer Mayor: ',maxNeg3,' | Posicion: ',PosMaxneg3
			FinSi
		FinSi
		Leer n
	FinMientras
	Escribir 'Cantidad de grupos con 4 o mas numeros primos consecutivos son: ',cGrupo
	Escribir "El mayor primo es ",MayorPrimo," y pertenece al grupo ",grupoM," en la posicion: ",posPrimo
FinAlgoritmo
