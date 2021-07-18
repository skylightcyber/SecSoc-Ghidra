# SecSoc-Ghidra
Presentation materials.

# Helpful Commands
## Compiling Code
`gcc code.c -o code`
### Using GCC to output Assembly code
`gcc -S code.c -o code.s`

## Cross Compiling
### Install GCC MIPS cross compiler
`sudo apt-get install gcc-mips-linux-gnu`
### Run cross-compiler
`mips-linux-gnu-gcc code.c -o code`