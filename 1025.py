def marble(q):
    array = input().split()

    while q > 0:
        query = input()
        if query in array:
            print(query, "found at", array.index(query) + 1)
        else:
            print(query, "not found")
        q -= 1


x = 1
while x:
    n = input()
    q = input()
    q = int(q)
    if n == '0' and q == 0:
        break
    
    print("CASE# " + str(x) + ":")
    marble(q)
    x += 1