from collections import Counter


def testCase (n, m):
    
    aux = 1
    index = 0
    line = input()
    array = line.split()
    dic = Counter(array)

    while m > 0:
        k, v = input().split()
        k = int(k)
        m -= 1

        if (dic[v] >= k):
            for l in array:
                index += 1
                if (l == v):
                    if (aux == k):
                        print(index)
                        aux = 1
                        index = 0
                        break
                    else:
                        aux += 1
        else:
            print('0')


while True:
    try:
        n, m = input().split()
        testCase(int(n), int(m))

    
    except EOFError:
        break