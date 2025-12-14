class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def insert(self, data):
        """Inserts a new node at the end of the linked list."""
        new_node = Node(data)
        if not self.head:
            self.head = new_node
            return
        temp = self.head
        while temp.next:
            temp = temp.next
        temp.next = new_node

    def delete(self, key):
        """Deletes the first node with the given key."""
        temp = self.head
        if temp and temp.data == key:
            self.head = temp.next
            temp = None
            return
        prev = None
        while temp and temp.data != key:
            prev = temp
            temp = temp.next
        if temp is None:
            print("Key not found!")
            return
        prev.next = temp.next
        temp = None

    def display(self):
        """Displays the linked list."""
        temp = self.head
        while temp:
            print(temp.data, end=" -> ")
            temp = temp.next
        print("None")

# Example Usage
if __name__ == "__main__":
    ll = LinkedList()
    n = int(input("Enter the number of elements to insert: "))
    for _ in range(n):
        item = input("Enter the item to insert: ")
        ll.insert(item)
    
    while True:
        print("\n1. Insert\n2. Delete\n3. Display\n4. Exit")
        choice = input("Enter your choice: ")
        
        if choice == "1":
            item = input("Enter the item to insert: ")
            ll.insert(item)
        elif choice == "2":
            key = input("Enter the item to delete: ")
            ll.delete(key)
        elif choice == "3":
            ll.display()
        elif choice == "4":
            print("Exiting... Thank you!")
            break
        else:
            print("Invalid choice! Please try again.")
