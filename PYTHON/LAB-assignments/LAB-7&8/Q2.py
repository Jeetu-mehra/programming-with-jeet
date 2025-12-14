class Queue:
    def __init__(self):
        self.queue = []

    def enqueue(self, item):
        """Adds an item to the end of the queue."""
        self.queue.append(item)
        print(f"Enqueued: {item}")

    def dequeue(self):
        """Removes and returns the front item from the queue. Returns None if the queue is empty."""
        if self.is_empty():
            print("Queue is empty!")
            return None
        item = self.queue.pop(0)
        print(f"Dequeued: {item}")
        return item

    def is_empty(self):
        """Checks if the queue is empty."""
        return len(self.queue) == 0

    def display(self):
        """Displays the queue elements."""
        print("Queue:", self.queue)

# Example Usage
if __name__ == "__main__":
    q = Queue()
    n = int(input("Enter the number of elements to enqueue: "))
    for _ in range(n):
        item = input("Enter the item to enqueue: ")
        q.enqueue(item)
    
    while True:
        print("\n1. Enqueue\n2. Dequeue\n3. Display Queue\n4. Exit")
        choice = input("Enter your choice: ")
        
        if choice == "1":
            item = input("Enter the item to enqueue: ")
            q.enqueue(item)
        elif choice == "2":
            q.dequeue()
        elif choice == "3":
            q.display()
        elif choice == "4":
            print("Exiting... Thank you!")
            break
        else:
            print("Invalid choice! Please try again.")
