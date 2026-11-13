### 1. Do all data types occupy the same amount of memory?

No, it depends on their data types. as example:
- *short usually* takes 2 bytes.
- *int usually* takes 4 bytes.
- *long long*  takes 8 bytes.


### 2. Are the sizes of all data types the same on every computer?

No, the sizes of some data types is diffrent depending on the computer, operating system, and of course compiler.

For example, *long* usually takes:
- 4 bytes on Windows and 8 bytes on most of 64-bit Linux systems.

Although, some types have fixed sizes, such as *char16_t* (2 bytes) and *char32_t* (4 bytes).

### 3. What did you discover?

I discovered that different data types use different amounts of memory depending on their purpose.
I also learned that the size of some data types can change depending on the computer and compiler.
and I can use `sizeof()` which allows us to find out how much memory a variable or data type takes in bytes.

This helped me understand that choosing the right data type is important when writing programs because it affects memory usage and the range of values a variable can store which is something that make a program more efficient.


**Part 2**
-Assign -5 to an unsigned short variable. What happens?
We get zero as unsigned short does not cover negetive numberes.

-Explain the difference between signed and unsigned integer types.
First undigned short does not cover negetive numbers, second their rage is different, the unsigned short as did not cover negetive number is ccan hold twice as much as positive numbers.

**part 3**
`Change the precision to 100. What do you observe?`
When I changed the precision to 100, I noticed that more digits were displayed after the decimal point. 
`Are all three results identical?`
No, the extra digits are not the same and are not necessarily accurate because each data type has a limited precision.
`Why do float, double, and long double have different levels of precision?`
Float, double, and long double have different levels of precision because they use different amounts of memory to store decimal numbers.
What I discovered is that the more bits available for storing a floating-point number, the more precision it can generally provide.

`Why might long double have the same precision as double on some computers?`
Because some computers use the same amount of memory for *long double* and *double*, so they have the same precision.


**Part 4**
`What is a primitive data type?`
A primitive data type is a basic data type used to store simple values, such as numbers, text and character, true or false (boolean) values.

`What is the difference between char, wchar_t, char16_t, and char32_t?`
char: used for basic characters.
wchar_t: Used for wide characters.
char16_t: Used for UTF-16 characters.
char32_t: Used for UTF-32 characters.
`Why do programming languages provide different integer types?`
Because different programs need to store different numbers. Some need small numbers, while others need much larger numbers.

`What does precision mean in floating-point numbers?`
Precision means how accurately a data type can store a decimal number.

`What is the difference between memory size and the range of values a data type can represent?`
Memory size is the amount of memory a data type uses. Range is the smallest and largest values it can store.