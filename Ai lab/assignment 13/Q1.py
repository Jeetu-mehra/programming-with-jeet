import itertools

# ---------------- SYMBOL CLASS ----------------
class Symbol:
    def __init__(self, name):
        self.name = name

    def evaluate(self, values):
        return values[self.name]

    def __repr__(self):
        return self.name


# ---------------- UNARY OPERATOR ----------------
class Not:
    def __init__(self, operand):
        self.operand = operand

    def evaluate(self, values):
        return not self.operand.evaluate(values)

    def __repr__(self):
        return f"¬({self.operand})"


# ---------------- BINARY OPERATORS ----------------
class And:
    def __init__(self, left, right):
        self.left = left
        self.right = right

    def evaluate(self, values):
        return self.left.evaluate(values) and self.right.evaluate(values)

    def __repr__(self):
        return f"({self.left} ∧ {self.right})"


class Or:
    def __init__(self, left, right):
        self.left = left
        self.right = right

    def evaluate(self, values):
        return self.left.evaluate(values) or self.right.evaluate(values)

    def __repr__(self):
        return f"({self.left} ∨ {self.right})"


class Implies:   # P → Q
    def __init__(self, left, right):
        self.left = left
        self.right = right

    def evaluate(self, values):
        return (not self.left.evaluate(values)) or self.right.evaluate(values)

    def __repr__(self):
        return f"({self.left} → {self.right})"


class Iff:   # P ↔ Q
    def __init__(self, left, right):
        self.left = left
        self.right = right

    def evaluate(self, values):
        return self.left.evaluate(values) == self.right.evaluate(values)

    def __repr__(self):
        return f"({self.left} ↔ {self.right})"


# ---------------- TRUTH TABLE FUNCTION ----------------
def truth_table(expr, symbols):
    print(f"\nTruth Table for: {expr}")
    print(" | ".join([s.name for s in symbols]) + " | Result")
    print("-" * (len(symbols) * 4 + 10))

    for values_tuple in itertools.product([False, True], repeat=len(symbols)):
        values = dict(zip([s.name for s in symbols], values_tuple))
        result = expr.evaluate(values)

        row = " | ".join(['T' if values[s.name] else 'F' for s in symbols])
        print(f"{row} | {'T' if result else 'F'}")


# ---------------- MAIN PROGRAM ----------------
if __name__ == "__main__":
    P = Symbol('P')
    Q = Symbol('Q')
    R = Symbol('R')

    # 1. ¬P → Q
    expr1 = Implies(Not(P), Q)

    # 2. ¬P ∧ ¬Q
    expr2 = And(Not(P), Not(Q))

    # 3. ¬P ∨ ¬Q
    expr3 = Or(Not(P), Not(Q))

    # 4. ¬P → Q (same as 1)
    expr4 = Implies(Not(P), Q)

    # 5. ¬P ↔ ¬Q
    expr5 = Iff(Not(P), Not(Q))

    # 6. (P ∨ Q) ∧ (¬P → Q)
    expr6 = And(Or(P, Q), Implies(Not(P), Q))

    # 7. (P ∨ Q) → R
    expr7 = Implies(Or(P, Q), R)

    # 8. ((P ∨ Q) → R) ↔ ((¬P ∧ Q) → R)
    expr8 = Iff(
        Implies(Or(P, Q), R),
        Implies(And(Not(P), Q), R)
    )

    # 9. ((P → Q) ∧ (Q → R)) → (P → R)
    expr9 = Implies(
        And(Implies(P, Q), Implies(Q, R)),
        Implies(P, R)
    )

    # 10. ((P → (Q ∨ R)) → (¬P ∧ ¬Q ∧ ¬R))
    expr10 = Implies(
        Implies(P, Or(Q, R)),
        And(Not(P), And(Not(Q), Not(R)))
    )

    # PRINT ALL TRUTH TABLES
    truth_table(expr1, [P, Q])
    truth_table(expr2, [P, Q])
    truth_table(expr3, [P, Q])
    truth_table(expr4, [P, Q])
    truth_table(expr5, [P, Q])
    truth_table(expr6, [P, Q])
    truth_table(expr7, [P, Q, R])
    truth_table(expr8, [P, Q, R])
    truth_table(expr9, [P, Q, R])
    truth_table(expr10, [P, Q, R])