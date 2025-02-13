def remove_invalid_lines(document):
    return "\n".join(filter(lambda x: not x.startswith("-"), document.split("\n")))