def divide_list(nums, divisor):
    result = []
    for i in range(0, len(nums)):
        result.append(nums[i] / divisor)
    return result
