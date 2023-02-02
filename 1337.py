def hands (x, y, z):
    aux = []
    if (x == y and x == z):
        aux.append(1)
    elif (x == y or x == z or y == z):
        aux.append(2)
        if (x == y):
            aux.append(x)
            aux.append(z)
        elif (x == z):
            aux.append(x)
            aux.append(y)
        else:
            aux.append(y)
            aux.append(x)
    else:
        aux.append(3)
    return (aux)

while True:
    x, y, z = input().split()
    x = int(x)
    y = int(y)
    z = int(z)
    hand = hands(x, y, z)

    if (x == 0 and hand[0] == 1):
        break
    else:
        if (hand[0] == 1 and x == 13):
            print('*')
        elif (hand[0] == 1):
            print(x+1, y+1, z+1)
        elif (hand[0] == 2 and hand[2] == 13):
            print( "1", hand[1]+1, hand[1]+1)
        elif (hand[0] == 2 and hand[1] == 13 and hand[2] == 12):
            print("1 1 1")
        elif (hand[0] == 2):
            if (hand[1] < hand[2]):
                print(hand[1], hand[1], hand[2]+1)
            elif (hand[1] > hand[2] and hand[2]+1 != hand[1]):
                print(hand[2]+1, hand[1], hand[1])
            elif (hand[2]+2 <= 13):
                print(hand[1], hand[1], hand[2]+2)
            else:
                print("1 1 1")
        else:
            print("1 1 2")