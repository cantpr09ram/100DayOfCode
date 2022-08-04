#Palindrome Number
def solution(a:int) -> bool:
    b = str(a)
    for i in range(len(b)):
        if b[i] != b[len(b) - i - 1]:
            return False
    return True
a = 101
x = solution(a)
print(x)