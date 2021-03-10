
def solution(H):
    N = len(H)
    max_from_left = [0]*(N+1)
    max_from_right = [0]*(N+1)
    cur_max = 0
    for i in range(N):
        cur_max = max(cur_max, H[i])
        max_from_left[i+1] = cur_max
    cur_max = 0
    for i in range(N-1, -1, -1):
        cur_max = max(cur_max, H[i])
        max_from_right[i] = cur_max
    #print(max_from_left, max_from_right)
    result = float("inf")
    for i in range(N+1):
        result = min(result, max_from_left[i]*i + max_from_right[i]*(N-i))
    return result

if __name__ == '__main__':
    print(solution([3,1,4]))
    print(solution([5,3,2,4]))
    #print(solution([]))
