#Roman to Integer
def romanToInt(s: str) -> int:
        ans = 0
        for i in range(len(s)):
            if s[i] == 'I':
                ans += 1
            elif s[i] == 'V':
                if s[i - 1] == 'I' and i > 0:
                    ans -= 2
                ans += 5
            elif s[i] == 'X':
                if s[i - 1] == 'I' and i > 0:
                    ans -= 2
                ans += 10
            elif s[i] == 'L':
                if s[i - 1] == 'X' and i > 0:
                    ans -= 20
                ans += 50
            elif s[i] == 'C':
                if s[i - 1] == 'X' and i > 0:
                    ans -= 20
                ans += 100
            elif s[i] == 'D':
                if s[i - 1] == 'C' and i > 0:
                    ans -= 200
                ans += 500
            elif s[i] == 'M':
                if s[i - 1] == 'C' and i > 0:
                    ans -= 200
                ans += 1000
            else:
                continue
            print(s[i])
            print(ans)
        return ans
s = "MMMCDXC"
a = romanToInt(s)
print(a)