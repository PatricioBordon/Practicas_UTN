Algoritmo sin_titulo
	Leer dBm
	CcontMN = 0
	CcontMN = 0
	cont = 0
	Cseg2 = verdadero
	Cseg = verdadero
	Cprimer2 = verdadero
	Cprimer = verdadero
	nrofrase = 0
	AcontM = 0
	AcontM = 0
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
						Si dBm>=anterior Entonces
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
			// inicio consigna b
			Si dBm<0 Entonces
				Si Bprimer==verdadero Entonces
					Bprimer = falso
					mayor = dBm
					BcontM = BcontM+1
				SiNo
					Si Bseg==verdadero Entonces
						Bseg = falso
						Si dBm>=mayor Entonces
							menor = anterior
							mayor = dBm
						SiNo
							menor = dBm
							mayor = dBm
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
			// inicio consigna c
			Si dBm!=0 Entonces
				Si Cprimer==verdadero Entonces
					Cprimer = falso
					Cmayor = anterior
					CcontM = CcontM+1
					frasemin = nrofrase
				SiNo
					Si Cseg==verdadero Entonces
						Cseg = falso
						Si dBm>=Cmayor Entonces
							menor = Cmayor
							Cmayor = dBm
							CcontMN = CcontMN+1
						SiNo
							menor = dBm
							frasemin = nrofrase
							CcontMN = CcontMN+1
						FinSi
					SiNo
						Si dBm<=Cmayor Entonces
							CcontM = CcontM+1
							Cmayor = dBm
						SiNo
							CcontMN = CcontMN+1
							Si dBm>menor Entonces
								menor = dBm
								frasemin = nrofrase
							FinSi
						FinSi
					FinSi
				FinSi
			FinSi
			Si dBm!=0 Entonces
				Si Cprimer2==verdadero Entonces
					Cprimer2 = falso
					Cmayor2 = anterior
					CcontM = CcontM+1
					frasemin2 = nrofrase
				SiNo
					Si Cseg2==verdadero Entonces
						Cseg2 = falso
						Si dBm>=Cmayor2 Entonces
							Cmenor = Cmayor2
							Cmayor2 = dBm
							CcontMN = CcontMN+1
						SiNo
							Cmenor = dBm
							frasemin2 = nrofrase
							CcontMN = CcontMN+1
						FinSi
					SiNo
						Si dBm>=Cmayor2 Entonces
							Cmayor2 = dBm
						SiNo
							Si dBm<=Cmenor Entonces
								Cmenor = dBm
								CcontMN = CcontMN+1
								frasemin2 = nrofrase
							FinSi
						FinSi
					FinSi
				FinSi
			FinSi
			// fin consigna c
			Leer dBm
			Si dBm==0 Entonces
				cont = cont+1
			SiNo
				cont = 0
			FinSi
		FinMientras
		Escribir 'Cantidad de maximos negativos de la frase ',nrofrase,' son ',BcontM
		Escribir 'Cantidad de minimos positivos de la frase ',nrofrase,' son ',BcontMN
		Leer dBm
	FinMientras
	Escribir 'Hay ',AcontM,' Picos Maximos en todo el archivo'
	Escribir 'Hay ',AcontMN,' Picos Minimos en todo el archivo'
	Escribir 'Frase con el pico minimo mas alto: frase ',frasemin
	Escribir 'Frase con el pico maximo mas bajo: frase ',frasemin2
FinAlgoritmo
