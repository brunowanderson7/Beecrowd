
def processInt(n):

    inteiros = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']
    n2 = []

    for l in n:
        if (l == 'O' or l == 'o'):
            n2.append('0')
        
        elif (l == 'l'):
            n2.append('1')
        elif (l == ' ' or l == ','):
            continue
        else:
            if (l in inteiros):
                n2.append(l)
            else:
                n2 = []
                break

    result = ''.join(n2)
    if (result == ''):
        result = "error"

    else:
        result = int(result)
        if(result > 2147483647):
            result = str(result)
            result = 'error'
        
        else:
            result = str(result)

    return (result)

while True:
    try:
        n = input()
        n = processInt(n)
        print(n)

    except EOFError:
        break