txt1 = "Ho la, soy Alan"
txt2 = "12332"
txt3 = "Buenos 232"
txt4 = "hOLA"
txt5 = "Buenas noches"

print(dir(txt1))    #?Sirve para ver que se puede hacer con el objeto

#!Dato.método()

#!Conversion de valores
#*Convierte a mayúsculas
resultado2 = txt1.upper()
print(resultado2)

#*Convierte a minúsculas
resultado3 = txt3.lower()
print(resultado3)

#*Primer letra a mayúsculas y las demás a minúsculas
resultado4 = txt4.capitalize()
print(resultado4)

#!Búsqueda de valores
#*Busca una cadena en otra cadena, retorna -1 si no hay nada
resultado5 = txt5.find("noches")
print(resultado5)

#*Busca una cadena en otra cadena, retorna una excepción si no hay nada
resultado6 = txt1.index("A")
print(resultado6)

#!Revisa el tipo de dato que tenemos
#* Si es un numero devuelve true
resultado7 = txt2.isnumeric()
print(resultado7)

#* Si es un alfanumérico devuelve true, el espacio no es alfanumérico
resultado8 = txt3.isalpha()
print(resultado8)


#!Cuenta la cantidad de veces que esta algo
#* Devuelve la cantidad de veces que coincida
resultado9 = txt2.count("a")
print(resultado9)

#*Cuenta el numero de caracteres en una cadena
resultado10 = len(txt3)
print(resultado10)


#!Verificación de inicio y fin
#*Revisa el inicio, retorna true y false
resultado11 = txt2.startswith("H")
print(resultado11)


#*Revisa el final, retorna true y false
resultado12 = txt3.endswith("e")
print(resultado12)

#!C ???????
#*cambia una parte de la cadena por otra
resultado13 = txt5.replace("Buenas", "Aprendiendo")
print(resultado13)

#*Separar cadenas con una que le demos, devuelve una lista, cada palabra nueva se crea a partir del valor que le dimos
resultado14 = txt1.split(" ")
print(resultado14)
print(resultado14[3])