0. Produces output according to a format
1. Handles d and i conversion specifiers
2. Handles this custom conversion specifier - b: the unsigned int argument is converted to binary
3. Handles u, o, x and X conversion specifiers
4. Uses a local buffer of 1024 chars in order to call write as little as possible
5. Handles this custom specifier - s: prints the string
6. Handles p conversion specifier
7. Handles +, space and # flag characters for non-custom specifiers
8. Handles l and h length modifiers for non-custom conversion specifiers
9. Handles the field width for non-custom conversion specifiers
10. Handles the precision for non-custom conversion specifiers
11. Handles the 0 flag character for non-custom conversion specifiers
12. Handles the - flag character for non-custom conversion specifiers.
13. Handles this custom specifier - r : prints the reversed string
14. handles this custom specifier - R: prints the rot13'ed string
15. All the above options work well together.
