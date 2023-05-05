
while True:
    try:
        n, l, c = input().split()
        n = int(n)
        l = int(l)
        c = int(c)
        
        words = input().split()
        lines = 1

        for i in range(1, n):
            if len(words[i-1]) + len(words[i]) + 1 <= c:
                words[i] = words[i-1] + ' ' + words[i]
            else:
                lines += 1
        
        pages = lines // l
        if lines % l != 0:
            pages += 1
        
        print(pages)
        pages = 0    
    except EOFError:
        break