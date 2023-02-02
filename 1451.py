def textChecker (line):
    result = []
    controller = 0  # 0 end, 1 home
    index = 0

    for l in line:
        if (l != '[' and l != ']'):
            if (controller == 0):
                result.append(l)
            else:
                result.insert(index, l)
                index += 1
        else:
            if (l == ']'):
                controller = 0
                index = 0
            else:
                controller = 1
                index = 0
    
    return (''.join(result))


while True:
    try:
        line = input()
        print(textChecker(line))

    except EOFError:
        break