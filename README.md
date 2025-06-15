# 🎯 Number Guessing Game (C++)

A simple terminal-based number guessing game written in C++. The game gives the player **three rounds** to guess a secret number (hardcoded as `16`), with score deductions based on incorrect guesses.

---

## 🕹️ Gameplay

- 🎯 You start with **100 points**.
- ⏱️ You have **3 rounds** to guess a number between 1 and 100.
- ❌ Score drops by 10 for each wrong guess in rounds 1 & 2, and by 80 in round 3 if incorrect.
- ✅ You win if you guess `16` in any round.
- 💡 A math-style hint is available before Round 3.

---

## 🧠 Hint System

Before Round 3, the game asks:

Would you like to get hint?? [Y/N]

If you type `Y`, it shows:

Your Age * 10 / 10 - your Age + 0 - 1 + 17

This simplifies to `16`, the correct answer. 😉

---

## 🛠️ How to Run

1. Save the code to a file, for example: `guess.cpp`
2. Compile it with a C++ compiler:

```bash
g++ guess.cpp -o guess

3. Run it:



./guess


---

📦 Requirements

C++ compiler (e.g., g++)

Console/terminal access
## 🧠 Hint System

Before Round 3, the game asks:

