class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        a_len = len(digits)
        ans = 0
        for i in range(a_len):
            ans += digits[i] * (10**(a_len-i - 1))
        return [i for i in str(ans+1)]