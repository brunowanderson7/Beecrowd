def nSoldiers(x, y):
    result = int(x) - int(y)
    if result < 0:
        result = result * (-1)
        
    return (result)

while True:
    try:
        x, y = input().split()
        print(nSoldiers(x, y))

    except EOFError:
        break