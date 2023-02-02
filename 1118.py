def readNotes ():
    n1 = float(input())
    if n1 < 0 or n1 > 10:
        print("nota invalida")
        return(readNotes())
    return n1

def avarenge ():
    x = readNotes()
    y = readNotes()

    print("media = {:.2f}" .format((x + y)/2))
    while True:
        x = float(input("novo calculo (1-sim 2-nao)\n"))
        if x == 1:
            avarenge()
            break
        elif x == 2:
            break

avarenge()