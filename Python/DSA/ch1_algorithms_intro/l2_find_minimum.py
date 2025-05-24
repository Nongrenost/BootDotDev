def find_minimum(nums):
    if not nums:
        return None
    lowest = float('inf')
    for num in nums:
        if num < lowest:
            lowest = num
    return lowest