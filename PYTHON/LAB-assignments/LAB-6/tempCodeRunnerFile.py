import random

class RockPaperScissors:
    def __init__(self, rounds):
        self.total_rounds = rounds
        self.current_round = 0
        self.user_wins = 0
        self.computer_wins = 0
        self.choices = ['rock', 'paper', 'scissors']

    def find_winner(self, user_choice, computer_choice):
        if user_choice == computer_choice:
            return 'draw'
        elif (user_choice == 'rock' and computer_choice == 'scissors') or \
             (user_choice == 'scissors' and computer_choice == 'paper') or \
             (user_choice == 'paper' and computer_choice == 'rock'):
            self.user_wins += 1
            return 'user'
        else:
            self.computer_wins += 1
            return 'computer'

    def check_winner(self):
        if self.user_wins > self.total_rounds // 2:
            return 'User'
        elif self.computer_wins > self.total_rounds // 2:
            return 'Computer'
        return None

    def play_game(self):
        print("Welcome to Rock-Paper-Scissors!")

        while self.current_round < self.total_rounds:
            print(f"\nRound {self.current_round + 1} of {self.total_rounds}")
            user_choice = input("Enter your choice (rock, paper, scissors): ").lower()

            if user_choice not in self.choices:
                print("Invalid choice. Try again.")
                continue

            computer_choice = random.choice(self.choices)
            print(f"Computer chose: {computer_choice}")

            winner = self.find_winner(user_choice, computer_choice)

            if winner == 'draw':
                print("It's a draw!")
            elif winner == 'user':
                print("You win this round!")
            else:
                print("Computer wins this round!")

            self.current_round += 1

            overall_winner = self.check_winner()
            if overall_winner:
                print(f"\n{overall_winner} wins the game!")
                break

        else:
            print("\nGame over! It's a tie.")

rounds = int(input("Enter the number of rounds: "))
game = RockPaperScissors(rounds)
game.play_game()
