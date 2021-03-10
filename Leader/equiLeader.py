#!/usr/bin/python3

def fastLeader(A):
    A.sort()
    size = 0
    n = len(A)
    for i in range(n):
        if size == 0:
            value = A[i]
            size += 1
        else:
            if A[i] != value:
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

def solution(A):
    n = len(A)
    equiLeader = 0
    for i in range(1,n+1):
        calcLeader1 = fastLeader(A[:i])
        calcLeader2 = fastLeader(A[i:])
        if calcLeader2 == calcLeader1 and calcLeader1 != -1 and calcLeader2 != -1:
            equiLeader += 1
    return equiLeader

if __name__ == "__main__":
    print(solution([4, 3, 4, 4, 4, 2]))
    print(solution([1,2]))