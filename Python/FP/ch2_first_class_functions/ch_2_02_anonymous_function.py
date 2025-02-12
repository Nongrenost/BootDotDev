def file_type_getter(file_extension_tuples):
    result_dict = {}
    for ext_tuple in file_extension_tuples:
        for ext in ext_tuple[1]:
            result_dict[ext] = ext_tuple[0]
    return lambda s: result_dict.get(s, "Unknown")
