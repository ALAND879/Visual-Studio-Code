#*definir variables
nombre = "Alan D"
edad = 18
print("El nombre es: ")
print(nombre)
print("La edad es: ")
print(edad)

#*Concatenar texto con "+" (no se puede numero-texto)
nombre = "Alan"
bienvenida = "Hola " + nombre + " ¿Como estás?"
print(bienvenida)

#*Concatenar con fstrings (string-numero-etc;)
nombre = "Alan 5"
bienvenida = f"Hola {nombre} ¿Como estas?"
del nombre #borra lo que contiene "nombre"

print(bienvenida)


#*Operadores de pertenencia "in" y "not in", responden con true o false
#Busca "ola" en bienvenida
print ("ola" in bienvenida)
#Busca si no esta "ola" en bienvenida
print ("ola" not in bienvenida)

