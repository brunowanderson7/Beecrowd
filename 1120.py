d, n = input().split()

while True:
    if d == '0' and n == '0':
        break

    n = n.replace(d, '')
    if(n == ''):
        n = '0'
    
    print(int(n))
    d, n = input().split()