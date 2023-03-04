
Gryffindor = 0
Ravenclaw = 0
Hufflepuff = 0
Slytherin = 0

print("Bienvenido, responde el test y sabras a que casa correspondes: \n")
a = int(input("""Q1) Do you like Dawn or Dusk?
    1) Dawn
    2) Dusk\n"""))
if(a == 1):
    Gryffindor = Gryffindor + 1
    Ravenclaw = Ravenclaw + 1

elif(a == 2):
    Hufflepuff = Hufflepuff +1
    Slytherin = Slytherin +1

else:
    print("Opción invalida")


a = int(input("""Q2) When I’m dead, I want people to remember me as:
    1) The Good
    2) The Great
    3) The Wise
    4) The Bold\n"""))
if(a == 1):
    Hufflepuff = Hufflepuff + 2

elif(a == 2):
    Slytherin = Slytherin + 2

elif(a == 3):
    Ravenclaw = Ravenclaw + 2

elif(a == 4):
    Gryffindor = Gryffindor + 2

else:
    print("Opción invalida")

a = int(input("""Q3) Which kind of instrument most pleases your ear?
    1) The violin
    2) The trumpet
    3) The piano
    4) The drum\n"""))

if(a == 1):
    Slytherin = Slytherin + 4

elif(a == 2):
    Hufflepuff = Hufflepuff + 4

elif(a == 3):
    Ravenclaw = Ravenclaw + 4

elif(a == 4):
    Gryffindor = Gryffindor + 4

else:
    print("Opción invalida")

#Imprimir la casa con mas pts

if ((Gryffindor > Slytherin) and (Gryffindor > Hufflepuff) and (Gryffindor > Ravenclaw)):
    print("Perteneces a la casa Gryffindor ")

elif ((Hufflepuff > Slytherin) and (Hufflepuff > Gryffindor) and (Hufflepuff > Ravenclaw)):
    print("Perteneces a la casa Hufflepuff")

elif((Slytherin > Gryffindor) and (Slytherin > Hufflepuff) and (Slytherin > Ravenclaw)):
    print("Perteneces a la casa Slytherin")

elif((Ravenclaw > Slytherin) and (Ravenclaw > Hufflepuff) and (Ravenclaw > Gryffindor)):
    print("Perteneces a la casa Ravenclaw")
