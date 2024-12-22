def filter_messages(messages: str):
    filtered = []
    removed_profanities_count = []

    for message in messages:
        word_list = message.split()
        profanities_counter = 0
        filtered_message = []

        for word in word_list:
            if word == "dang":
                profanities_counter += 1
            else:
                filtered_message.append(word)

        filtered.append(" ".join(filtered_message))
        removed_profanities_count.append(profanities_counter)

    return filtered, removed_profanities_count

'''

def filter_messages_(messages):
    filtered = None
    removed
    return filtered, removed_profanities_count
'''
