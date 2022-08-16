def lengthOfLastWord(s: str) -> int:
    a = [i for i in s.split(' ') if len(i) != 0]
    print(a)
    return len(a[-1])
a = "   fly me   to   the moon  "
s = lengthOfLastWord(a)
print(s)