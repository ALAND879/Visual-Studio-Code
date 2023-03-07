opc = 1
este_curso = 90
este_curso_c = 210
otros_cursos_min = 150
otros_cursos_max = 420
prom_cursos = 240
otros_cursos_c = 300

print("""Bienvenido, que opción deseas:
1.- Diferencia en porcentaje entre el curso actual y el mas rápido de otros cursos
2.- Diferencia en porcentaje entre el curso actual y el mas lento de otros cursos
3.- Diferencia en porcentaje entre el curso actual y el promedio de otros cursos
4.- Porcentaje de material inservible que se reduce en el promedio de otros cursos.
5.- Porcentaje de material inservible que se reduce en el curso actual.
6.- Ver 10 hrs de este curso, a cuantas horas de otros cursos equivale.
7.- Ver 10 hrs de otro curso, a cuantas horas de este curso equivale.
8.- Salir
""")
opc = int(input("Ingresa la opción que deseas: "))

if (opc == 1):
    res = ((otros_cursos_min * 100) / este_curso) - 100
    print(f"La diferencia entre este curso y el mas rápido en porcentaje es de {res}%")

elif(opc == 2):
    res = ((otros_cursos_max * 100) / este_curso) - 100
    print(f"La diferencia entre este curso y el mas lento en porcentaje es de {res}%")

elif(opc == 3):
    res = ((prom_cursos * 100) / este_curso) - 100
    print(f"La diferencia entre este curso y el promedio en porcentaje es de {res}%")

elif(opc == 4):
    res = ((otros_cursos_c * 100) / prom_cursos) - 100
    print(f"Porcentaje de material inservible que se reduce en el promedio de otros cursos es de {res}%")

elif(opc == 5):
    res = ((este_curso_c * 100) / este_curso) - 100
    print(f"Porcentaje de material inservible que se reduce en el promedio de otros cursos es de {res}%")

elif(opc == 6):
    res = (60 * 100)
    res = ( res / 90)
    res = ( res * prom_cursos)/10
    res = (res/60)
    print(f"10 horas de este curso en otro curso equivalen a: {res} horas de curso")

elif(opc == 7):
    res = (60 * 100)
    res = (res / prom_cursos)
    res = (res * este_curso)/10
    res = (res /60)
    print(f"10 horas de otro curso en este equivalen a: {res} horas de curso")

elif(opc == 8):
    print("Gracias\nSaliendo...")

else:
    print("No existe esa opción")