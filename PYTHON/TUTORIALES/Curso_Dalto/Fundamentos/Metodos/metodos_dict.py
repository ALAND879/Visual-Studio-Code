
diccionario = {
    "nombre" : 'Alan',
    "apellido" : 'Jiménez',
    "Edad": 18,
    "Carrera": 'software'
}

#*Keys--Devuelve las claves (sirve para iterar)
claves = diccionario.keys()
print (claves)

#*get--devuelve el valor de una clave, si no lo encuentra, devuelve "none"
clave2 = diccionario.get("Edad")
print (clave2)

#*pop--Elimina un elemento del diccionario
diccionario.pop("nombre")
print (diccionario)

#*items--para iterar el diccionario
clave4 = diccionario.items()
print (clave4)

#*clear--Elimina todo en el diccionario
diccionario.clear()
print (diccionario)