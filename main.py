#Longest Common Prefix
def longestCommonPrefix(strs: list[str]) -> str:
    ans = ""
    if len(strs[0]) == 0:
        return ans
    else:
        a = zip(*strs)
        for i in  a:
            print(len(set(i)))
            if len(set(i)) != 1:
                return str(ans)
            elif len(set(i)) == 1:
                ans += i[0]
    return ans
a = longestCommonPrefix(["a"])
print(a)