def power_set(input_set):
    if not input_set:
        return [[]]
    all_subsets = [[]]
    
    for element in input_set:
        subset_with_elements = []
        for sub_set in all_subsets:
            subset_with_elements.append(sub_set + [element])
        all_subsets.extend(subset_with_elements)
    return all_subsets
            
