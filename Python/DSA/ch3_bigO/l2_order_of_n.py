def find_max(nums):
    biggest = float("-inf")
    for num in nums:
        if num > biggest:
            biggest = num
    return biggest