#!/usr/bin/python3

def fastLeader(A):
    n = len(A)
    leader = -1
    A.sort()
    candidate = A[n//2]
    count = 0
    for i in range(n):
        if A[i] == candidate:
            count += 1
    if count > n // 2:
        leader = candidate
    return leader

def goldenLeader(A):
    size = 0
    n = len(A)
    for i in range(n):
        if size == 0:
            size += 1
            value = A[i]
        else:
            if value != A[i]:
                size -= 1
            else:
                size += 1
    candidate = -1
    if size > 0:
        candidate = value
    leader = -1
    count = 0
    for i in range(n):
        if A[i] == candidate:
            count += 1
    if count > n // 2:
        leader = candidate
    return leader


if __name__ == "__main__":
    print(fastLeader([2,1,3,4,4,1,1,2,1,1,1]))
    print(fastLeader([1,2,3]))
    tm = [2,1,3,4,4,1,1,2,1,1,1]
    tm.sort()
    print(goldenLeader(tm))
    print(goldenLeader([1,2,3]))

