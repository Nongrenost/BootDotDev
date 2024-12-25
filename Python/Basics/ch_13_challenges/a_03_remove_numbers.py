def remove_nonints(nums):
    only_ints = []
    for num in nums:
        if type(num) is int:
            only_ints.append(num)
    return only_ints