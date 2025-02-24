def list_files(parent_directory, current_filepath=""):
    result = []
    for key, value in parent_directory.items():
        new_path = f"{current_filepath}/{key}"
        if value is None:
            result.append(new_path)
        else:
            result.extend(list_files(value, new_path))
    return result
    
    
