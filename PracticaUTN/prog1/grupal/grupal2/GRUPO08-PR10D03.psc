Algoritmo sin_titulo
	Leer dBm
	CcontMN = 0
	CcontMN = 0
	menor = 0
	menor2 = 0
	mayor = 0
	mayor2 = 0
	// gjhgjghjg
	pMb = falso
	pmM = falso
	// gjhgjghjg
	cont = 0
	frasemin = 0
	frasemin2 = 0
	Cseg2 = verdadero
	Cseg = verdadero
	Cprimer2 = verdadero
	Cprimer = verdadero
	Aprimer2 = verdadero
	nrofrase = 0
	AcontM = 0
	Aseg2 = verdadero
	AcontMN = 0
	Mientras cont<4 Hacer
		Si dBm==0 Entonces
			cont = cont+1
		SiNo
			cont = 0
		FinSi
		Aseg = verdadero
		Bseg = verdadero
		Bsegp = verdadero
		Bprimer = verdadero
		Bprimerp = verdadero
		BcontM = 0
		anterior = dBm
		BcontMN = 0
		nrofrase = nrofrase+1
		Aprimer = verdadero
		Mientras (cont<2) Hacer
			// inicio consigna a
			Si dBm!=0 Entonces
				Si Aprimer==verdadero Entonces
					Aprimer = falso
					mayor = anterior
					AcontM = AcontM+1
				SiNo
					Si Aseg==verdadero Entonces
						Aseg = falso
						Si dBm>=picoMaxB Entonces
							menor = anterior
							mayor = dBm
							AcontMN = AcontMN+1
						SiNo
							menor = dBm
							mayor = anterior
							AcontMN = AcontMN+1
						FinSi
					SiNo
						Si dBm>=mayor Entonces
							AcontM = AcontM+1
							mayor = dBm
						SiNo
							AcontMN = AcontMN+1
						FinSi
					FinSi
				FinSi
			FinSi
			// fin consigna a
			// inicio consigna c
			Si dBm!=0 Entonces
				Si Aprimer2==verdadero Entonces
					Aprimer2 = falso
					mayor2 = anterior
					picoMaxB = dBm
					frasemin2 = nrofrase
				SiNo
					Si Aseg2==verdadero Entonces
						Aseg2 = falso
						Si dBm>=picoMaxB Entonces
							menor2 = anterior
							mayor2 = dBm
							picoMaxB = dBm
						SiNo
							mayor2 = anterior
							picoMaxB = anterior
						FinSi
					SiNo
						Si dBm>=mayor2 Entonces
							// inicio consigna c
							Si pMb==verdadero Entonces
								Si dBm<=picoMaxB Entonces
									picoMaxB = dBm
									frasemin2 = nrofrase
								FinSi
							SiNo
								picoMaxB = dBm
								frasemin2 = nrofrase
								pMb = verdadero
							FinSi
						SiNo
							// inicio consigna c
							Si pmM==verdadero Entonces
								Si dBm>=picoMinM Entonces
									picoMinM = dBm
									frasemin = nrofrase
								FinSi
							SiNo
								picoMinM = dBm
								pmM = verdadero
								frasemin = nrofrase
							FinSi
						FinSi
						// fin consigna c
					FinSi
				FinSi
			FinSi
			// fin consigna c
			// inicio consigna b
			Si dBm<0 Entonces
				Si Bprimer==verdadero Entonces
					Bprimer = falso
					mayor = dBm
				SiNo
					Si Bseg==verdadero Entonces
						Bseg = falso
						Si dBm>=mayor Entonces
							menor = anterior
							mayor = dBm
							BcontM = BcontM+1
						SiNo
							menor = dBm
							mayor = dBm
							BcontM = BcontM+1
						FinSi
					SiNo
						Si dBm>=mayor Entonces
							BcontM = BcontM+1
							mayor = dBm
						FinSi
					FinSi
				FinSi
			FinSi
			Si dBm>0 Entonces
				Si Bprimerp==verdadero Entonces
					Bprimerp = falso
					mayor = dBm
				SiNo
					Si Bsegp==verdadero Entonces
						Bsegp = falso
						Si dBm>=mayor Entonces
							menor = anterior
							mayor = dBm
							BcontMN = BcontMN+1
						SiNo
							menor = dBm
							mayor = dBm
							BcontMN = BcontMN+1
						FinSi
					SiNo
						Si dBm>=mayor Entonces
							mayor = dBm
						SiNo
							BcontMN = BcontMN+1
						FinSi
					FinSi
				FinSi
			FinSi
			// fin consigna b
			Leer dBm
			Si dBm==0 Entonces
				cont = cont+1
			SiNo
				cont = 0
			FinSi
		FinMientras
		Si cont==2 Entonces
			Escribir 'Cantidad de minimos positivos de la frase ',nrofrase,' son ',BcontMN
			Escribir 'Cantidad de maximos negativos de la frase ',nrofrase,' son ',BcontM
		FinSi
		Leer dBm
	FinMientras
	Escribir 'Hay ',AcontM,' Picos Maximos en todo el archivo'
	Escribir 'Hay ',AcontMN,' Picos Minimos en todo el archivo'
	Escribir 'Frase con el pico minimo mas alto: frase ',frasemin2
	Escribir 'Frase con el pico maximo mas bajo: frase ',frasemin
FinAlgoritmo
