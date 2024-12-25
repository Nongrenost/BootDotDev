class Book:
    def __init__(self, title, author):
        self.title = title
        self.author = author

class Library:
    def __init__(self, name):
        self.name = name
        self.books = []

    def add_book(self, book):
        self.books.append(book)

    def remove_book(self, book):
        for item in self.books:
            if item.title == book.title and item.author == book.author:
                self.books.remove(item)

    def search_books(self, search_string):
        output_list = []
        for book in self.books:
            if search_string.lower() == book.title.lower() or search_string.lower() == book.author.lower():
                output_list.append(book)
        return output_list
                