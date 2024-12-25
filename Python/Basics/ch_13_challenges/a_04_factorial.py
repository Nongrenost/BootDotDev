def factorial(num):
    if num == 0:
        return 1
    fact = num * factorial(num - 1)
    return fact
