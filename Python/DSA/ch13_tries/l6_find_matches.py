class Trie:
    def find_matches(self, document):
        matches = set()
        
        for index in range(0, len(document)):
            current_level = self.root
            
            for i in range(index, len(document)):
                if document[i] not in current_level:
                    break
                current_level = current_level[document[i]]
                if self.end_symbol in current_level:
                    matches.add(document[index:i+1])
        return matches
            


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
