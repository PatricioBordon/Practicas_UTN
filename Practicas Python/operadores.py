#Operadores matematicos
from typing import Literal


suma= 2 + 2
resta= 5 - 3
division= 10 / 2
divisionentera= 8 // 4
resto= 7 % 5
exponente= 4 ** 2
multiplicacion= 4 * 2
print("suma: ",suma)
print("Resta: ",resta)
print("division flotante: ",division)
print("division entera: ",divisionentera)
print("Resto: ",resto)
print("Exponente: ",exponente)
print("Multiplicacion: ",multiplicacion)

#operadores de cadenas
cadena1 = "hola "
cadena2 = " mundo"
cadenas_unidas = cadena1 + cadena2
cadenas_multiplicadas = cadena1 * 5
print ("cadenas unidas ",cadenas_unidas)
print ("cadenas multiplicadas ",cadenas_multiplicadas)

#operadores de relacion
numero1 = 5
numero2 = 10
numero3= 10.0
numero4= -10
cadena= "10"
comprobacion = numero2 == cadena
print(comprobacion)

#operadores de asignacion
x=5
y=10
x = y #x = 10
x += y #x = 15
x -= y #x = -5
x *= y #x = 50
x **= y #x = 9765625
x /= y #x = 0.5
x //= y #x = 0 
x = x % y #x = 5

#Operadores Logicos y de Pertenencia
verdadero = True
falso = False
comprobacion2 = not falso
print(comprobacion2)  

#Operadores de pertenencia
cadena="hola HOLAAAAAAaaaaa"
print('hola2' not in cadena)