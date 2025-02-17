def add_format(default_formats, new_format):
    copy = default_formats.copy()
    copy[new_format] = True
    return copy


def remove_format(default_formats, old_format):
    copy = default_formats.copy()
    copy[old_format] = False
    return copy
