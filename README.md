# Compilors_p3
Project 3-Semantics 

Implement a stack adapter according to the following

Stack item type is String or whatever was your identifier token instance - the stack will process identifiers. You may also store line number or the entire token for more detailed error messaging
You can assume no more than 100 items in a program and generate stack overflow if more
Interface
void push(String);
just push the argument on the stack
void pop(void);
just remove
 int find(String);
the exact interface may change, see below
find the first occurrence of the argument on the stack, starting from the top and going down to the bottom of the stack
return the distance from the TOS (top of stack) where the item was found (0 if at TOS) or -1 if not found
