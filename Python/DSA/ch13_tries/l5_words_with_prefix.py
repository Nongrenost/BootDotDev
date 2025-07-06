class Trie:
    def search_level(self, current_level, current_prefix, words):
        if self.end_symbol in current_level:
            words.append(current_prefix)
        for char in sorted(current_level):
            if char == self.end_symbol:
                continue
            extended_prefix = current_prefix + char
            self.search_level(current_level[char], extended_prefix, words)    
            
        return words

    def words_with_prefix(self, prefix):
        matches = []
        current = self.root
        for char in prefix:
            if char not in current:
                return []       
            current = current[char]
        matches = self.search_level(current, prefix, matches)
        return matches
        

    # don't touch below this line

    def __init__(self):
        self.root = {}
        self.end_symbol = "*"

    def add(self, word):
        current_level = self.root
        for letter in word:
            if letter not in current_level:
                current_level[letter] = {}
            current_level = current_level[letter]
        current_level[self.end_symbol] = True
