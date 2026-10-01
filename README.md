# Typing Speed Game ⌨️

A command-line **typing speed game built in C++** that allows users to test and improve their typing speed and accuracy.

The game generates random characters based on the selected difficulty level. Players type the generated characters within a selected time limit and receive a score based on their accuracy and typing speed.

## Overview

The project was developed to practice C++ programming concepts while building an interactive command-line application.

The game includes a main menu where users can:

* Start a new typing game
* Select a difficulty level
* Choose the duration of the game
* View previously recorded scores
* Access help
* View information about the project

## Features

* ⌨️ Interactive typing game
* 🎯 Three difficulty levels
* ⏱️ User-defined game duration
* 🧮 Score calculation based on correct and incorrect characters
* 🚀 Typing speed calculation
* 💾 Persistent score storage using a text file
* 📊 Scorecard to view previous results
* 📖 Built-in Help section
* ℹ️ About Us section
* 💻 Command-line interface

## Difficulty Levels

The game provides three difficulty levels:

| Level  | Description                             |
| ------ | --------------------------------------- |
| Easy   | Generates lowercase alphabet characters |
| Medium | Generates uppercase alphabet characters |
| Hard   | Generates special characters            |

The selected difficulty determines the range of characters generated during the game.

## How the Game Works

### 1. Enter Your Name

When the program starts, the user is asked to enter their name.

```text
Enter user name::
```

### 2. Start a New Game

Select **New Game** from the main menu.

```text
****Main Menu****

1) New game
2) Scorecard
3) Help
4) About us
5) Back to main menu
6) Exit
```

### 3. Select Difficulty

Choose one of the available difficulty levels:

```text
Please enter your difficulty level

1. Easy
2. Medium
3. Hard
4. Back to main menu
```

### 4. Select Game Duration

The player specifies how many minutes they want to play.

The game continues generating typing challenges until the selected time has elapsed.

### 5. Type the Generated Characters

The program generates a random sequence of characters.

```text
Type the following code

abcXYZ
```

The player's input is compared character-by-character with the generated sequence.

Correct characters increase the score, while incorrect characters decrease it.

### 6. Score and Speed

At the end of the game, the application calculates:

* Total score
* Number of correctly typed characters
* Typing speed
* Selected difficulty level

The result is then stored in the score file.

## Score Management

Scores are stored locally in:

```text
score.txt
```

Each completed game appends the player's name, score, speed, and difficulty level to the file.

Example:

```text
name = Shubham     score = 42   speed = 18.5   level = 1
```

The **Scorecard** option reads the stored results and displays them in the terminal.

## Technology Stack

| Technology             | Purpose                        |
| ---------------------- | ------------------------------ |
| C++                    | Application development        |
| `<iostream>`           | Console input/output           |
| `<ctime>`              | Game timing                    |
| `<fstream>`            | Reading and writing scores     |
| Standard C++ libraries | Core application functionality |
| Makefile               | Build automation               |

## Project Structure

```text
typingGame/
│
├── main.cpp
│   └── Main menu and application entry point
│
├── newGame.h
│   └── Game logic, difficulty levels and scoring
│
├── scoreCard.h
│   └── Score storage and score display
│
├── help.h
│   └── Help section
│
├── aboutUs.h
│   └── Project information
│
├── header.h
│   └── Header-related functionality
│
├── score.txt
│   └── Stored game results
│
├── Makefile
│   └── Build configuration
│
└── README.md
    └── Project documentation
```

## Getting Started

### Prerequisites

You need a C++ compiler to build the project.

Recommended:

* GCC / G++
* MinGW on Windows
* Clang

### Clone the Repository

```bash
git clone https://github.com/shubham-ch/typingGame.git
cd typingGame
```

### Compile

Using `g++`:

```bash
g++ main.cpp -o typingGame
```

### Run

**Linux/macOS:**

```bash
./typingGame
```

**Windows:**

```bash
typingGame.exe
```

You can also use the provided `Makefile` to build the project if your environment supports `make`.

## Concepts Practiced

This project provided practical experience with:

* C++ functions
* Conditional statements
* Loops
* Random number generation
* File input/output
* Time measurement
* Character manipulation
* User input handling
* Modularizing functionality across header files
* Basic game logic
* Persistent data storage

## Future Improvements

Possible improvements include:

* More sophisticated typing-speed calculations
* Words and sentences instead of individual characters
* Words-per-minute (WPM) measurement
* Accuracy percentage
* Leaderboard functionality
* Better input validation
* Improved game timer
* Cross-platform terminal support
* More difficulty levels
* A graphical user interface

## Author

**Shubham**

GitHub:
https://github.com/shubham-ch

## License

This project is intended for educational and personal use.
