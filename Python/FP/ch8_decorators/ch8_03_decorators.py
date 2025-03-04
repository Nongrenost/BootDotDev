def markdown_to_text_decorator(func):
    def wrapper(*args, **kwargs):
        new_args = list(map(convert_md_to_txt, args))
        new_kwargs = dict(map(lambda pair: (pair[0], convert_md_to_txt(pair[1])), kwargs.items()))
        return func(*new_args, **new_kwargs)
    return wrapper

# don't touch below this line


def convert_md_to_txt(doc):
    lines = doc.split("\n")
    for i in range(len(lines)):
        line = lines[i]
        lines[i] = line.lstrip("# ")
    return "\n".join(lines)
