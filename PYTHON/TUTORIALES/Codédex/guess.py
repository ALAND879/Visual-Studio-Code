import random

num = random.randint(0,50)

print("Adivina el numero, es entre 0 y 50")
guess = int(input("Ingresa tu primer numero: "))

while (guess != num) :
    if (guess < num) :
        guess = int(input(f"El numero a adivinar es mas grande que {guess}, introduce otro numero: "))
    elif(guess > num):
        guess = int(input(f"El numero a adivinar es mas pequeño que {guess}, introduce otro numero: "))

print(f"Excelente, lo adivinaste, el numero es: {num}")