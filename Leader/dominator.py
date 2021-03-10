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
    B = A.copy()
    n = len(A)
    leader = fastLeader(B)
    if leader == -1:
        return -1
    for i in range(n):
        if A[i] == leader:
            return i
    return -1

if __name__ == "__main__":
    print(solution([2,1,3,4,4,1,1,2,1,1,1]))
    print(solution([1,2,3]))
    print(solution([0, 0, 1, 1, 1]))
    print(solution( [2, 1, 1, 1, 3] ))