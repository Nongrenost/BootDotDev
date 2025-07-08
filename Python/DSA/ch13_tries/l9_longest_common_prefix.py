class Trie:
    def longest_common_prefix(self):
        current = self.root
        prefix = ""
        while True:
            end_symbol_found = False
            keys = current.keys()
            for key in keys:
                if key == self.end_symbol:
                    end_symbol_found = True
                    break
            if end_symbol_found:
                break
            if len(keys) == 1:
                prefix += key
                current = current[key]
            if len(keys) > 1 or len(keys) == 0:
                break
        return prefix
                

    # don't touch below this line

    def __init__(self):
        self.root = {}
        self.end_symbol = "*"

    def add(self, word):
        current = self.root
        for letter in word:
            if letter not in current:
                current[letter] = {}
            current = current[letter]
        current[self.end_symbol] = True
