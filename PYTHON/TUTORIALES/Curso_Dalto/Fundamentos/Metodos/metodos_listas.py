

#*Crear lista
lista = list(["hola", "alan", 128])

#*Devuelve el numero de elementos en la lista
#? Len()
len(lista)

#*Agregando elementos con append a la lista
#? ___.append()
lista.append("Append")

#*Agregando elementos con insert a la lista
#? ___.insert(no.de indice, ____)
lista.insert(1, "Insert")

#*Agregando varios elementos a la lista extend
#? ___.extend([])
lista.extend(["Insertar", "Con", "extend", 1])

#*Eliminar elementos de la lista por su indice
#? ___.pop(no.de indice)
#!Si el indice es -1, se elimina el ultimo, para el penultimo -2, etc.
lista.pop(0)

#*Removiendo elementos con un valor
#? ___.remove(elemento)
lista.remove(128)
print (lista)

#*Eliminar todos los elementos de la lista
#? ___.clear()
lista.clear()
print (lista)


lista = list([243, 12, 128, 93,23, True, False])

#*Ordenar lista, orden:(False,True,No. de menor a mayor)
lista.sort()

#*Ordenar lista, orden:(No. de mayor a menor, True, False)
lista.sort(reverse = True)

#*Invertir los elementos de una lista
lista.reverse()

#*verificar un elemento en una lista
elemento = lista.index(True)
print (elemento)

print (lista)

