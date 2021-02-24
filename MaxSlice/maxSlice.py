

def golden_max_slice(A):
    max_ending = max_slice = 0
    for a in A:
        print("a = ", a)
        max_ending = max(0, max_ending + a)
        print("max_ending: ", max_ending)
        max_slice = max(max_slice, max_ending)
        print("max_slice: ", max_slice)
    return max_slice

def quadratic_max_slice(A):
    n = len(A)
    result = 0
    for p in range(n):
        sum = 0
        for q in range(p, n):
            sum += A[q]
            result = max(result, sum)
    return result


def stock_profit(A):
    n = len(A)
    result = 0
    for p in range(n):
        profit = A[p]
        for q in range(p+1, n):
            profit -= A[q]
            result = max(result, profit)
    return result

def solution(A):
    n = len(A)
    result = 0
    profit = 0
    for i in range(n):
        for j in range(i+1,n):
            profit = A[j] - A[i]
            result = max(result, profit)
    if result <= 0:
        return 0
    return result


if __name__ == '__main__':
    a = [5, -7, 3, 5, -2, 4, -1]
    stock = [23171, 21011, 21123, 21366, 21013, 21367]
    print(solution(stock))
    print(golden_max_slice([3,2,-6,4,0]))