#Valid Parentheses
"""
( 40
) 41
{ 123
} 125
[ 91
] 93
"""
def isValid(s: str) -> bool:
    a = [ord(i) for i in s]
    stack = []
    for i in a:
        if not stack:
            stack.append(i)
        elif (i == 41 and stack[-1] == 40) or (i == 125 and stack[-1] == 123) or (i == 93 and stack[-1] == 91):
            stack.pop()
        else:
            stack.append(i)
    if not stack:
        return True
    return False
a = "([)]"
s = isValid(a)
print(s)