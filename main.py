def removeDuplicates(nums: list[int]) -> int:
    '''
    Two pointers approach:
        Have two pointers named left and right. The left pointer always points
        at the last found unique element and the right pointer advances through
        the array to find the next unique element, and once having found the
        next unique element, that element would replace the element at the 
        next index of left and the left pointer would point to left + 1 index
        since that index would be the new index of the last found unique element.
        Continue this process until the right pointer has traversed the entire array.
        
        Time complexity: O(n) where n = len(nums)
        Auxiliary (extra) space: O(1) since regardless of the input array size, the
                                 space consumed remains the same
        
    '''
    if len(nums) == 1:
        return 1
    
    i = 0
    j = 1
    while j < len(nums):
        if nums[i] != nums[j]:
            j += 1
            i += 1
        else:
            while j < len(nums) - 1:
                nums[j + 1], nums[j] = nums[j], nums[j + 1]
                j+=1
            j = i+1
            print(nums, i ,j)
    return len(set(nums))

def removeDuplicates1(nums: list[int]) -> int:
    if len(nums) == 1:
        return 1
    left = 0
    right = 1
        
    while right < len(nums):
        while right < len(nums) and nums[right] == nums[left]:
            right += 1
        if right < len(nums):
            left += 1
            nums[left], nums[right] = nums[right], nums[left]
            print(nums, left, right)
            right += 1
    return left + 1

nums = [1,2,2,2,3,3,3,4,4,4,4,4,5,5,5,5,6,6,7,7,8,8,9]
nums2 = [1,2,2,2,3,3,3,4,4,4,4,4,5,5,5,5,6,6,7,7,8,8,9]
a = removeDuplicates(nums)
print("---------------------------------------------")
b = removeDuplicates(nums2)
print(a, b)

        