#### CSE231 - Operating Systems

## Assignment1 - Basic Linux/Unix Shell


#### What To Submit

- The C program sources.
- Makefile to compile the source and generate the running binary for the shell.
- Write-up describing the system, the options the shell commands can take, the errors you handled and the assumptions you made. Also provide test cases to test the functioning of the shell.

---
Internal Commands: cd echo pwd 
External Commands: ls cat date rm mkdir
Use: fork() excel() and then wait()
---
### Creating a makefile:
```make
make:
    gcc -o bash bash.c 
    ./bash

```
- Compiling c program 
- Then running the compiled c program
