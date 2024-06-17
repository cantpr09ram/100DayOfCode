import sys

numbers = []

#print("Enter numbers, one per line. Press Ctrl+D (or Ctrl+Z on Windows) to finish.")
try:
    while True:
        a = input()
        if a == "":
            break
        numbers = []
        for i in range(int(a)):
            numbers.append(input())
        print('\n'.join(map(str, sorted(map(int, numbers)))))
except EOFError:
    pass

# Convert to integers, sort, and print
