"""
======================================================================================================================
 Name        : Lab_1
 Author      : Eng. Mohamed Kadry Hussein
 Created on  : 21/8/2024
 Description : Unit 2 C-Progtamming >>Pre-Processor Directives>>Lab_1
 ======================================================================================================================
"""
import datetime as dt

# Record the start time
start_time = dt.datetime.now()

# Simulate user input for two numbers
print("Enter your first number: ")
# num1 = int(input(":"))
print("Enter your second number: ")
# num2 = int(input(":"))
num1 = 1
num2 = 2

# Calculate the sum of the two numbers
result = num1 + num2
print(f"The sum is: {result}")

# Calculate the elapsed time
elapsed_time = dt.datetime.now() - start_time

# Display the elapsed time in seconds and microseconds
print(f"Time taken: {elapsed_time.seconds} seconds and {elapsed_time.microseconds} microseconds")
