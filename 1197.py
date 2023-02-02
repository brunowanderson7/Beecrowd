def aceleration(x, y):
    return((x*2) * y)

while True:
    try:
        x, y = input().split()
        print(aceleration(int(x), int(y)))
    except EOFError:
        break