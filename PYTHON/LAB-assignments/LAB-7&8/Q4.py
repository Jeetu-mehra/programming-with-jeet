class Employee:
    def __init__(self, name, salary):
        self.name = name
        self.salary = salary

    def __add__(self, other):
        """Combines salaries of two employees."""
        return self.salary + other.salary

    def __sub__(self, other):
        """Finds the difference between salaries of two employees."""
        return abs(self.salary - other.salary)

    def __gt__(self, other):
        """Compares employees based on salary."""
        return self.salary > other.salary

    def __lt__(self, other):
        """Compares employees based on salary."""
        return self.salary < other.salary

    def __eq__(self, other):
        """Checks if two employees have the same salary."""
        return self.salary == other.salary

# Example Usage
if __name__ == "__main__":
    name1 = input("Enter name of Employee 1: ")
    salary1 = float(input("Enter salary of Employee 1: "))
    emp1 = Employee(name1, salary1)
    
    name2 = input("Enter name of Employee 2: ")
    salary2 = float(input("Enter salary of Employee 2: "))
    emp2 = Employee(name2, salary2)
    
    print(f"Combined Salary: {emp1 + emp2}")
    print(f"Salary Difference: {emp1 - emp2}")
