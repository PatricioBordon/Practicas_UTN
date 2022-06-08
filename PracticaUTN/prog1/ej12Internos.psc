Algoritmo sin_titulo
	Escribir 'Ingresar numero de interno desde 1 a 150'
	Leer nroInter
	Mientras (nroInter<1)||(nroInter>150) Hacer
		Escribir 'ERROR: Ingresar desde 1 a 150'
		Leer nroInter
	FinMientras
	aux = 0
	aux2 = 0
	mayor = 0
	segundaQ = 0
	primeraQ = 0
	Mientras nroInter!=0 Hacer
		acumV = 0
		nroAntInter = nroInter
		Total = 0
		Mientras nroInter==nroAntInter Hacer
			Escribir 'Dia'
			Leer Dia
			Mientras (Dia<1)||(Dia>30) Hacer
				Escribir 'el Dia debe ser de 1 a 30'
				Leer Dia
			FinMientras
			Escribir 'Recaudacion de dia'
			Leer RecauDia
			Si aux2==0 Entonces
				menor = RecauDia
				diamenor = Dia
				aux2 = 1
				nroMenor = nroAntInter
			SiNo
				Si RecauDia<menor Entonces
					diamenor = Dia
					menor = RecauDia
					nroMenor = nroAntInter
				FinSi
			FinSi
			Total = Total+RecauDia
			Escribir 'Cantidad de pasajeros'
			Leer cantPas
			Escribir 'Cantidad de viajes'
			Leer cantViajes
			Si (Dia>=1)&&(Dia<=15) Entonces
				primeraQ = primeraQ+cantPas
				acumV = acumV+cantViajes
			SiNo
				Si (Dia>=16)&&(Dia<=30) Entonces
					segundaQ = segundaQ+cantPas
				FinSi
			FinSi
			Escribir 'Ingresar numero de interno desde 1 a 150'
			Leer nroInter
		FinMientras
		Si aux==0 Entonces
			mayor = acumV
			aux = 1
			InterMayor = nroAntInter
		SiNo
			Si acumV>mayor Entonces
				mayor = acumV
				InterMayor = nroAntInter
			FinSi
		FinSi
		Escribir 'Recaudacion total de interno',nroAntInter,': $',Total
	FinMientras
	Si primeraQ>segundaQ Entonces
		mayorQ = 1
	SiNo
		mayorQ = 2
	FinSi
	Escribir 'Numero de interno que realizo mas viajes: ',InterMayor
	Escribir 'Numero de Quincena coon Mayor cantidad de pasajeros: ',mayorQ
	Escribir 'Numero de interno que menors recaudo: ',nroMenor,' en el dia ',diamenor
FinAlgoritmo
