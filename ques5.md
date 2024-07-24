The **parseAddition**, **parseSubtraction**, **parseMultiplication**, and **parseDivision** functions prompt the user to enter two float values and perform the respective arithmetic operations (addition, subtraction, multiplication, and division). The result of each operation is printed to the console, with a check to avoid division by zero in the division function.

The **parseExponentiation** function asks the user for a float base and an integer exponent, then calculates the base raised to the power of the exponent using the `pow` function, and prints the result. The **parseSquareRoot** function prompts for a single float value, computes its square root using the `sqrt` function, and displays the result.

The **parseSine**, **parseCosine**, and **parseTangent** functions each prompt the user to input a float value and then compute the sine, cosine, and tangent of the input value, respectively, using standard trigonometric functions from the math library. The results are printed to the console.

The **help** function prints a help menu that lists all the available operations and their corresponding command keys. The **error** function prints an error message when the user inputs an unrecognized command.

The **main** function controls the program flow, repeatedly prompting the user to enter a command and calling the appropriate function based on the input. It uses a `switch` statement to handle each command, displaying the help menu, executing arithmetic and trigonometric operations, or exiting the program based on the user's choice.