# Simple Calculator - C++

## Overview

This project provides an interactive calculator that accepts two numeric inputs and an arithmetic operator, then performs the requested operation.
The application supports repeated calculations through a loop and includes validation for invalid operators and division by zero.

## Features
* Addition, subtraction, multiplication, and division
* Modulo operation using `fmod()`
* Division-by-zero validation
* Invalid operator handling
* Interactive command-line interface
* Continuous calculation mode
* Modular implementation using dedicated functions


## Supported Operations

| Operator | Operation      |
| :------: | -------------- |
|    `+`   | Addition       |
|    `-`   | Subtraction    |
|    `*`   | Multiplication |
|    `/`   | Division       |
|    `%`   | Modulo         |

## Program Flow

```text
Start
  │
  ▼
Input First Number
  │
  ▼
Input Second Number
  │
  ▼
Input Operator
  │
  ▼
Select Operation
  │
  ├── + ──► Addition
  ├── - ──► Subtraction
  ├── * ──► Multiplication
  ├── / ──► Division
  └── % ──► Modulo
          │
          ▼
      Display Result
          │
          ▼
   Continue? (Y/N)
       │       │
      Yes      No
       │       │
       └──►   End
```



## Author
~~ Ibrahim Elwan ~~


