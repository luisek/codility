
def prefixSum(A):
    N = len(A)
    P = [0] * (N +1 )
    for i in range(1,N+1):
        P[i] = P[i-1] + A[i-1]
    return P

def solution(A):
    n = len(A)
    min_average = float("inf")
    min_p = float("inf")
    for P in range(0, n-1):
        prefixes = prefixSum(A[P:n])
        i = 2
        for Q in range(P+1, n):
            div = Q-P+1
            average = prefixes[i] / div
            if average < min_average:
                min_average = average
                min_p = P
            i+=1
    return min_p

if __name__ == '__main__':
    A = [2,3,1,4]
    print(prefixSum(A))
    print(solution(A))