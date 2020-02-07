def distinc(A):
    n = len(A)
    A.sort()
    result = 1
    for k in range(1, n):
        if A[k] != A[k-1]:
            result += 1
    return result

if __name__ == '__main__':
    print(distinc([1,2,3,4]))
    print(distinc([1,1,1,2]))