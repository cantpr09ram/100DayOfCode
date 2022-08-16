def searchInsert(nums: list[int], target: int) -> int:
    for i in range(len(nums)):
        if nums[i]== target:
            return i
            print('a')
        elif i < len(nums) - 1 and (nums[i] < target and nums[i+1] >= target):
                return i + 1
                print('b')
    return len(nums)
            

a = [1,2,3,4,6]
b = searchInsert(a, 5)
print(b)