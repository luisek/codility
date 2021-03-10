#! /usr/bin/python

def divisor(n):
    i = 1
    result = 0
    while (i*i < n):
        if (n % i == 0):
            print(i)
            print(i*i)
            result += 2
        i += 1
    if (i * i == n):
        print(i*i)
        result += 1
    return result

if __name__ == '__main__':
    print(divisor(4))
    print(divisor(3))
    print(divisor(6))
    print(divisor(24))
    print(30*'*')
    print(divisor(30))