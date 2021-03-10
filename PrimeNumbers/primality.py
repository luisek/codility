#!/usr/bin/python

def primality(n):
    i = 2
    while (i * i <= n):
        if (n % 2 == 0):
            return False
        i += 1
    return True

if __name__ == '__main__':
    print(primality(6))
    print(primality(5))
    print(primality(11))
    print(primality(12))
    print(primality(9999))