#Longest Common Prefix
def longestCommonPrefix(self, strs: List[str]) -> str:
    a = zip(*strs)
    ans = ''
    for i in  a:
        if len(set(i)) == 1:
            ans += i[0]
    return ans