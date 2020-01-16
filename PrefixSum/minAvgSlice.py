
def prefixSum(A):
    N = len(A)
    P = [0] * N
    for k in range(1, N + 1):
        P[k] = P[k-1] + A[k-1]
    return P

def solution(A):
    pi = 0
    qi = 1
    na = len(A)
    for p in range(0, na):
        

if __name__ == "__main__"
