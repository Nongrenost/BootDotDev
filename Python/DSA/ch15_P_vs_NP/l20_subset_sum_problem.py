def subset_sum(nums, target):
    last_index = len(nums) - 1

    return find_subset_sum(nums, target, last_index)
    


def find_subset_sum(nums, target, index):
    if target == 0:
        return True
    if index < 0 and target != 0:
        return False
    if nums[index] > target:
        return find_subset_sum(nums, target, index - 1)
    if find_subset_sum(nums, target, index - 1) or find_subset_sum(nums, target - nums[index], index - 1):
        return True
    return False
    
        