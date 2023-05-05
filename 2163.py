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
while x < n-1:

    for l in arrayFinal[x]:
        idc += 1
        if '42' in l:
            try:
                if arrayFinal[x-1][idc] == '7' and arrayFinal[x-1][idc-1] == '7' and arrayFinal[x-1][idc+1] == '7' and arrayFinal[x+1][idc] == '7' and arrayFinal[x+1][idc-1] == '7' and arrayFinal[x+1][idc+1] == '7' and arrayFinal[x][idc-1] == '7' and arrayFinal[x][idc-1] == '7':
                    print(x+1, idc+1)
                    break
            except:
                pass
    idc = 0
    x+=1
