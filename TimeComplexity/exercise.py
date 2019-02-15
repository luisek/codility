# -*- coding:utf8 -*-

def slow_solution(n):
    result = 0
    for i in range(n):
        for j in range(i + 1):
            result += 1
    return result

def fast_solution(n):
    result = 0
    for i in range(n):
        result += (i+1)
    return result

def model_solution(n):
    return n * (n+1) // 2

if __name__ == "__main__":
    print(slow_solution(5))
    print(fast_solution(5))
    print(model_solution(5))