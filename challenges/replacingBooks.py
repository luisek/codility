
def solution(A,K):
    elements = {}
    for i in range(len(A)):
        elements[A[i]] = elements.get(A[i], 0) + 1
    maxElem = max(elements, key=elements.get)
    if K == 0:
        return elements[maxElem]
    else:
        if K <= elements[maxElem] + (len(A) - K):
            return elements[maxElem] + K

    # print(maxElem)
    # for key, value in elements.items():
    #     print(key, ": ", value)

if __name__ == '__main__':
    print(solution([1,1,3,4,3,3,4], 2))
    print(solution([4, 5, 5, 4, 2, 2, 4], 0))
    print(solution([1, 3, 3, 2], 2))
NOT DONE