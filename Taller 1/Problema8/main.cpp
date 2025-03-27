def suma_multiplos(a, b, c):
    multiplos = set()
    for i in range(a, c, a):
        multiplos.add(i)
    for i in range(b, c, b):
        multiplos.add(i)

    multiplos_ordenados = sorted(multiplos)
    suma = sum(multiplos_ordenados)

    expresion = " + ".join(map(str, multiplos_ordenados))
    print(f"{expresion} = {suma}")

# Solicitar entrada al usuario
a = int(input("Ingrese el primer número: "))
b = int(input("Ingrese el segundo número: "))
c = int(input("Ingrese el límite: "))

suma_multiplos(a, b, c)
