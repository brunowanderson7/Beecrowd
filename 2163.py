n, m = input().split()
n = int(n)
m = int(m)

array = []
arrayFinal = []

for i in range(n):
    array.append(input().split(' '))
    arrayFinal.append(array)
    array = []

x = 1
idc = 0

cx = 0
cy = 0

while x < n-1:

    for l in arrayFinal[x]:
        if '42' in l:

            idc = l.index('42')
            while idc < m:
                try:
                    if arrayFinal[x-1][0][idc] == '7' and arrayFinal[x-1][0][idc-1] == '7' and arrayFinal[x-1][0][idc+1] == '7' and arrayFinal[x+1][0][idc] == '7' and arrayFinal[x+1][0][idc-1] == '7' and arrayFinal[x+1][0][idc+1] == '7' and arrayFinal[x][0][idc-1] == '7' and arrayFinal[x][0][idc+1] == '7':
                        cx = x+1
                        cy = idc+1
                        break
                except:
                    pass
                idc+=1
    idc = 0
    x+=1

if x == n-1:
    print(cx, cy)