def fizzbuzz(start, end):
    for i in range(start, end):
        if i % 3 == 0 and i % 5 == 0:
            print("fizzbuzz")
        elif i % 3 == 0:
            print("fizz")
        elif i % 5 == 0:
            print("buzz")
        else:
            print(i)
# Don't Touch Below This Line


def main():
    test(1, 8)
    test(0, 100)
    test(4, 30)
    test(0, 15)


def test(start, end):
    print("Starting test")
    fizzbuzz(start, end)
    print("======================")


main()
