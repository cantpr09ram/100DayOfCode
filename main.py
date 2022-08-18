class Solution:
    def addBinary(self, a: str, b: str) -> str:
        len_a = len(a)
        len_b = len(b)
        len_max = max(len_a,len_b)
        a = a.zfill(len_max)
        b = b.zfill(len_max)
        result = ''
        carry = 0
        for i in range(len_max - 1, -1, -1):
            r = carry
            r += 1 if a[i] == '1' else 0
            r += 1 if b[i] == '1' else 0
            
            result = ('1' if r % 2 == 1 else '0') + result
            carry = 0 if r < 2 else 1

        if carry != 0:
            result = '1' + result

        return result