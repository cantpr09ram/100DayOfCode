class Solution:
    def climbStairs(self, n: int) -> int:
        if n == 1:
            return 1
        if n == 2:
            return 2
        current = 2
        pre = 1
    # 當前臺階的走法是前兩個臺階走法之和
        for i in range(2,n):
            current = current + pre
            pre = current - pre
        return current