
#*Los datos son modificables
lista = ["Alan David", "Soy Alan", True, 1.70, 18]
print(lista[4])
lista[0] = "nuevo valor"
print(lista[0])

#?No se puede modificar la tupla
tupla = ("Alan David", "Soy Alan", True, 1.70, 18)
#print(tupla[2]) = "Hola"  #*esto no es valido
print(tupla[2])

#?Creando un conjunto set, no tiene orden, no se puede acceder por un indice

conjunto = {"Alan David", "Soy Alan", True, 1.70, 1.70}
# conjunto[1] = "Hola"   #*NO SE PUEDE YA QUE NO TIENE ORDEN
#tampoco almacena datos duplicados
print(conjunto)

#*cambiar los datos de valores
conjunto ={"Asi si se puede cambiar la información"}
print(conjunto)

#*creando un diccionario

diccionario = {
#   clave/key   value/valor
    'nombre' : "Alan David",
    'edad':  18,
    'altura' : 1.70,
    'esta emocionado': True,
    'dato duplicado' : 18
}

#print(diccionario[valor])
print(diccionario['altura']+16)