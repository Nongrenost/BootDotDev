def args_logger(*args, **kwargs):
    prefix = 0
    for argument in args:
        prefix +=1
        print(f"{prefix}. {argument}")
    sorted_alphabetically = sorted(kwargs.items())
    for key, value in sorted_alphabetically:
        print(f"* {key}: {value}")