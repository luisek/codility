
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

def findLeader(A, i, end):
    B = A.copy()
    for j in range(i,end):
        B[j] += 1
    leader = fastLeader(B)
    return leader

def solution(K,M,A):
    n = len(A)
    leaders = []
    for i in range(n):
        end = K + i
        if end <= n:
            leader = findLeader(A, i, end)
            if leader != -1:
                leaders.append(leader)
    leaders = list(set(leaders)) 
    leaders.sort()
    return leaders

if __name__ == '__main__':
    print('in main')
    print(solution(3,5,[2,1,3,1,2,2,3]))
    print(solution(4,2,[1,2,2,1,2]))