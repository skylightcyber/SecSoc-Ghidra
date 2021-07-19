# SecSoc-Ghidra
Presentation materials.

# Helpful Commands
## Compiling Code
GCC:
`gcc code.c -o code`

Using GCC to output Assembly code:
`gcc -S code.c -o code.s`

Strip Symbols when compiling:
`gcc -s code.c -o code`

Strip symbols using strip command:
`strip -s code`

## Cross Compiling
Install GCC MIPS cross compiler
`sudo apt-get install gcc-mips-linux-gnu`

Run cross-compiler
`mips-linux-gnu-gcc code.c -o code`


# Random
Icon Path
`/path/to/ghidra/ghidra_10.0.1_PUBLIC/support/ghidra.ico`
