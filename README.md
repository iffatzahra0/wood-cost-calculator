# Wood Cost Calculator

This is a console-based C++ application that calculates the total cost of wood based on the number of pieces, their dimensions, and the type of wood selected. It uses the **board feet** formula and a predefined price list for different wood types.

## Features

- Calculates cost based on:
  - Number of pieces
  - Width (inches)
  - Height (inches)
  - Length (feet)
- Uses the **board feet** formula:  
  `Board Feet = (Width × Height × Length × Pieces) / 12`
- Supports different types of wood with predefined prices
- Totals multiple entries until the user exits
- Simple and user-friendly command-line interface

## Wood Price List

| Wood Type | Letter Code | Price (Per Board Foot) |
|-----------|-------------|------------------------|
| Pine      | P           | $0.89                  |
| Fir       | F           | $1.09                  |
| Cedar     | C           | $2.26                  |
| Maple     | M           | $4.50                  |
| Oak       | O           | $3.10                  |

## How to Use

1. **Compile the program**:
 compile the program on Visual Studio or any other IDE.

