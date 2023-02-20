# Parte 1 == asignación de caracteres a una cadena
mensaje = "Hola"
mensaje += " "
mensaje += "Soy"
mensaje += " "
mensaje += "Alan"

print("Asignación" + mensaje)

#Concatenación de la información
saludo = "Hola"
espacio = " "
nombre = "Alan"

print ("Concatenación: " + saludo + espacio + nombre)

resultado = 4 + 6
resultado = str(resultado)
print("El resultado de la suma es: " + resultado)

mensaje_dos = "Hola Alan"
buscar_sub_cadena = mensaje_dos.find("Alan")
print("Búsqueda: ")
print(buscar_sub_cadena)

print("Extracción:" )
extraer_sub_cadena = mensaje_dos[1:7]
print(extraer_sub_cadena)

print("Comparación: ")
comparación = mensaje == mensaje_dos
print(comparación)
