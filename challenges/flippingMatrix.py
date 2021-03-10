
def solution(A):
    m = len(A[0])
    count = {}
    for row in A:
        ones = []
        zeros = []
        for i in range(m):
            if row[i] == 1:
                ones.append(i)
            else:
                zeros.append(i)
        ones = tuple(ones)
        zeros = tuple(zeros)
        count[ones] = count.get(ones, 0) + 1
        count[zeros] = count.get(zeros, 0) + 1
    return max(count.values())

if __name__ == '__main__':

    A = [[0,0,0,0], [0,1,0,0], [1,0,1,1]]
    print(solution(A))
    A = [[0,1,0,1], [1,0,1,0], [0,1,0,1], [1,0,1,0]]
    print(solution(A))