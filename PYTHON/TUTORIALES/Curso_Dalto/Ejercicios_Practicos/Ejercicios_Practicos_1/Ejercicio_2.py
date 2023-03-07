"""
Pedir al usuario que diga cualquier texto real y: 
A)
-calcular cuanto tardaría en decir esa frase
-¿Cuantas palabras dijo?

B)
-Si se tarda mas de un minuto decirle que lleva mucho tiempo hablando

C)
-Cuanto tiempo tarda en decirlo una persona que habla 30% mas rápido

Datos: 1seg = 2 palabras
"""

frase = input("Ingresa el texto a decir: ")
palabras = frase.count(" ") + 1

tiempo = palabras / 2

#*A) y B)
if (tiempo < 60):
    print("\n-----------------\n")
    print(f'Se tardaría en decir "{frase}" un total de {tiempo} segundos.')
    print(f"La persona dijo {palabras} palabras")
    print("\n-----------------\n")
else:
    print("Te tardas mucho tiempo hablando, no tengo todo el día")

#*C)
tiempo = tiempo * 0.7
print(f'Una persona que habla 30% más rápido tardaría en decir "{frase}" un total de {tiempo} segundos.')
print("\n-----------------\n")