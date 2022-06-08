Algoritmo sin_titulo
	pMin = 0
	nMin = 0
	pMax = 0
	cont = 0
	m = verdadero
	nMax = 0
	p = verdadero
	frase = 0
	picoNmax = 0
	Leer dBm
	Mientras cont<4 Hacer
		Si dBm==0 Entonces
			cont = cont+1
		SiNo
			cont = 0
		FinSi
		primerPos = verdadero
		priNeg = verdadero
		contneg = 0
		picoMinPos = 0
		maximoNg = 0
		primerPosMin = verdadero
		frase = frase+1
		Mientras cont<2 Hacer
			Si (dBm>0) Entonces
				Si (primerPos==verdadero) Entonces
					pMax = pMax+1
					posMax = dBm
					primerPos = falso
				SiNo
					Si (dBm>=posMax) Entonces
						pMax = pMax+1
						posMax = dBm
						pMin = posMax
					SiNo
						pMin = pMin+1
						Si (primerPosMin==verdadero) Entonces
							posMinMin = dBm
							primerPosMin = falso
							nroFrase = frase
							picoMinPos = picoMinPos+1
						SiNo
							Si (dBm<=posMinMin) Entonces
								picoMinPos = picoMinPos+1
								posMinMax = dBm
								nroFrase = frase
							FinSi
						FinSi
					FinSi
				FinSi
			SiNo
				Si dBm<0 Entonces
					Si primerPos==falso Entonces
						Si priNeg==verdadero Entonces
							priNeg = falso
							nMax = dBm
							contneg = contneg+1
						SiNo
							Si dBm>=nMax Entonces
								nMax = dBm
								contneg = contneg+1
								picoNmax = picoNmax+1
							SiNo
								nMin = nMin+1
								Si primerNegMin==verdadero Entonces
									negMinMax = dBm
									primerNegMin = falso
									maximoNg = maximoNg+1
								SiNo
									Si dBm>=negMinMax Entonces
										negMinMax = dBm
										maximoNg = maximoNg+1
									FinSi
								FinSi
							FinSi
						FinSi
					SiNo
						Si priNeg==verdadero Entonces
							priNeg = falso
							nMax = dBm
							contneg = contneg+1
							picoNmax = picoNmax+1
						SiNo
							Si dBm>=nMax Entonces
								nMax = dBm
								contneg = contneg+1
								picoNmax = picoNmax+1
							SiNo
								nMin = nMin+1
								Si primerNegMin==verdadero Entonces
									negMinMax = dBm
									primerNegMin = falso
									maximoNg = maximoNg+1
								SiNo
									Si dBm>=negMinMax Entonces
										negMinMax = dBm
										maximoNg = maximoNg+1
									FinSi
								FinSi
							FinSi
						FinSi
					FinSi
				FinSi
			FinSi
			Si dBm!=0 Entonces
				Si (p==verdadero) Entonces
					mayor = dBm
					p = falso
					bajo = mayor
				SiNo
					Si dBm>mayor Entonces
						mayor = dBm
						nroFrase2 = frase
					SiNo
						Si m==verdadero Entonces
							menor = dBm
							m = falso
							nroFrase2 = frase
						SiNo
							Si dBm>menor Entonces
								menor = dBm
								nroFrase2 = frase
							FinSi
						FinSi
					FinSi
				FinSi
			FinSi
			Leer dBm
			Si dBm==0 Entonces
				cont = cont+1
			SiNo
				cont = 0
			FinSi
		FinMientras
		Escribir 'Cantidad de picos maximos negativos: ',contneg
		Escribir 'Cantidad de picos minimos positivos: ',picoMinPos
		Leer dBm
	FinMientras
	pMinimos = pMin+nMin
	pMaximos = pMax+picoNmax
	Escribir 'Cantidad de picos maximos y minimos en todo el archivo'
	Escribir 'Cantidad de picos minimos: ',pMinimos
	Escribir 'Cantidad de picos maximos: ',pMaximos
	Escribir 'La frase con el pico minimo mas alto fue la frase ',nroFrase2
	Escribir 'Frase con el pico maximo mas bajo fue la frase ',nroFrase
FinAlgoritmo
