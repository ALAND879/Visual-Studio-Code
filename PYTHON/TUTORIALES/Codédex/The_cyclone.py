
##*Pedir altura y credito, si es mayor a 137cm y 10 creditos entra, si mide menos de 137 imprimir "You're not tall enough" y si tiene menos de 10 creditos imprimir "You dont have enough credits", en caso contrario imprimir "Invalid data"
#? Bonus: Crear otra variable "With taller person, si la altura es menor a los 137 cm, y no esta con esta persona, no entra pero si esta con esta persona ssi puede entrar"
#! Variables a usar: height, credits, with_taller_person

height = int(input("Ingrese su altura en cm: "))
credits = int(input("Ingrese los créditos que posee: "))
persona_alta = False


if ((height > 137) and (credits >= 10)):
    print("Puedes pasar")

elif ((height > 137) or (credits >= 10)):
    if (height < 137):
        pa = input ("¿Vienes con una persona mas alta? ")
        pa = pa.lower()
        if(pa == "si"):
            print("Puedes pasar")
        elif(pa != "si"):
            print ("No eres lo suficientemente alto");
    elif(credits < 10):
        print("No tienes los créditos suficientes para entrar")
