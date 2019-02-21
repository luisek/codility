#

def slow_solution(A, B, m):
    n = len(A)
    sum_a = sum(A)
    sum_b = sum(B)
    for i in range(n):
        for j in range(n):
            change = B[j] - A[j]
            sum_a += change
            sum_b -= change
            if sum_a == sum_b:
                return True
            sum_a -= change
            sum_b += change
    return False

arrA = [1,2,3,4,5]
arrB = [2,2,6,1,2]

if __name__ == "__main__":
    print(slow_solution(arrA, arrB, 12))