Algoritmo sin_titulo
	// 9) Dada una lista de números compuesta por 10 grupos y cada grupo separado del
	// siguiente por un cero, se pide determinar e informar:
	// a) Para cada uno de los grupos el máximo y mínimo de los números pares. Se informan 2
	// resultados para cada grupo.
	// b) La cantidad de grupos donde se detectan 2 números perfectos consecutivos. Se informa
	// 1 resultado al final.
	// c) Informar cuantos grupos están formados por todos números alternados positivos y
	// negativos. Se informa 1 resultado al final.
	// Ejemplo 1 de un grupo alternado: 2, -3, 8, -10, 25, -13, 0
	// Ejemplo 2 de un grupo alternado: -2, 3, -8, 10, -25, 6, 0
	cantidadGrupo = 0
	anteultimo = 0
	ultimo = 0
	intercalado = 0
	Para lista<-1 Hasta 10 Con Paso 1 Hacer
		Leer n
		Si n!=0 Entonces
			nperfecto = 0
			primer = n
			prim = 0
			menor = 0
			mayor = 0
			seg = 0
			cont = 0
			primer = n
			inter = verdadero
		FinSi
		ing = 0
		Mientras n!=0 Hacer
			ing = ing+1
			acum = 0
			Para i<-1 Hasta n-1 Con Paso 1 Hacer
				Si n%i==0 Entonces
					acum = acum+i
				FinSi
			FinPara
			Escribir acum
			Si acum==n Entonces
				nperfecto = nperfecto+1
			SiNo
				nperfecto = 0
			FinSi
			Si n%2==0 Entonces
				cont = cont+1
				Si cont==1 Entonces
					prim = n
					mayor = prim
				SiNo
					Si cont==2 Entonces
						seg = n
						Si prim>seg Entonces
							mayor = prim
							menor = seg
						SiNo
							mayor = seg
							menor = prim
						FinSi
					SiNo
						Si n>mayor Entonces
							// si quiero sacar el anteultimo asigno
							// al menor=mayor
							// y borro el if de n<menor
							mayor = n
						SiNo
							Si n<menor Entonces
								menor = n
							FinSi
						FinSi
					FinSi
				FinSi
			FinSi
			// Algoritmo para detectar intercalado
			Si ultimo!=0 Entonces
				Si primer<0 Entonces
					primer = ultimo
					Si ultimo<0 Entonces
						inter = falso
					FinSi
				SiNo
					primer = ultimo
					Si ultimo>0 Entonces
						inter = falso
					FinSi
				FinSi
			FinSi
			Leer n
			ultimo = n
		FinMientras
		Si (inter==verdadero)&&(ing>1) Entonces
			intercalado = intercalado+1
		FinSi
		Escribir inter
		Si nperfecto==2 Entonces
			cantidadgrupos = cantidadgrupos+1
		FinSi
		Escribir 'Grupo ',lista
		Si mayor!=0 Entonces
			Escribir 'Mayor numero par: ',mayor
		FinSi
		Si menor!=0 Entonces
			Escribir 'Menor numero par: ',menor
		FinSi
	FinPara
	Escribir 'Hay ',intercalado,' grupos intercalados'
	Escribir 'Cantidad de grupos con dos numeros perfectos consecutivos: ',cantidadgrupos
FinAlgoritmo
