def function (A, B):
    
    if (len(A) < len(B)):
        result = False
    elif (len(A) == len(B)):
        result = (A == B)
    else:
        A = A[len(A)-len(B):len(A)]
        result = (A == B)
    return result


N = int(input())
while N > 0:
    A, B = input().split()
    print('encaixa') if function(A, B) else print('nao encaixa')
    N -= 1