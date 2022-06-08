Algoritmo sin_titulo
	terna = 0
	ternaneg = 0
	pneg = -99999999999999999
	neg = 0
	Para i<-1 Hasta 12 Con Paso 1 Hacer
		Leer n
		Si n>0 Entonces
			pos = pos+1
		SiNo
			pos = 0
		FinSi
		Si (pos%3==0)&&(pos!=0) Entonces
			terna = terna+1
		FinSi
		Si n<0 Entonces
			Si n>pneg Entonces
				pneg = n
				neg = neg+1
			SiNo
				neg = 0
			FinSi
		SiNo
			neg = 0
		FinSi
		Si (neg%3==0)&&(neg!=0) Entonces
			ternaneg = ternaneg+1
		FinSi
	FinPara
	Escribir 'Terna positiva consecutiva'
	Escribir terna
	Escribir 'Terna negativa ordenada y consecutiva'
	Escribir ternaneg
FinAlgoritmo
