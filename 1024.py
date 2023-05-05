def encrypt(string):
    count = 0
    string = list(string)
    for l in string:
        if ord(l) > 64 and ord(l) < 123:
            string[count] = chr(ord(l) + 3)
        count += 1

    string = string[::-1]

    count = (len(string)//2)
    for l in range(len(string)//2):
        string[count] = chr(ord(string[count]) - 1)
        count += 1
        
    try:
        string[count] = chr(ord(string[count]) - 1)
    except:
        pass

    string = ''.join(string)
    print(string)


x = int(input())
for i in range(x):
    string = input()
    encrypt(string)