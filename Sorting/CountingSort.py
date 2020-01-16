def countingSort(A, k):
    n = len(A)
    count = [0]*(k+1)
    for i in range(n):
        count[A[i]] += 1
    p = 0
    print(count)
    for i in range(k+1):
        for j in range(count[i]):
            A[p] = i
            p += 1
    return A

if __name__ == "__main__":
    tab = [3,4,2,0,1]
    print(countingSort(tab, 4))