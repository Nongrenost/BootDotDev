def bubble_sort(nums):
    if not nums:
        return []
    swapping = True
    end = len(nums)
    while(swapping):
        swapping = False
        for i in range(1, end):
            if nums[i-1] > nums[i]:
                hold = nums[i-1]
                nums[i-1] = nums[i]
                nums[i] = hold
                swapping = True
        end -= 1
    return nums
        
        