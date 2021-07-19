# /UNSW/SecSoc/Ghidra
## Introduction to Ghidra: The NSA’s Software Reverse Engineering Suite
This repo contains some of the source files and other materials from the talk to UNSW's Cyber Security Society (SecSoc)

# Helpful Commands
## Compiling Code
Compile with GCC: 
`gcc code.c -o code`

Using GCC to output Assembly code: 
`gcc -S code.c -o code.s`

Strip Symbols when compiling: 
`gcc -s code.c -o code`

Strip symbols using strip command: 
`strip -s code`

## Cross Compiling
Install GCC MIPS cross compiler: 
`sudo apt-get install gcc-mips-linux-gnu`

Run cross-compiler: 
`mips-linux-gnu-gcc code.c -o code`

# Random Things
Icon Path: 
`/path/to/ghidra/ghidra_10.0.1_PUBLIC/support/ghidra.ico`

# Links
[Ghidra Website](https://ghidra-sre.org/)

[Ghidra Cheat Sheet](https://ghidra-sre.org/CheatSheet.html)

[NSA Website](https://www.nsa.gov/)

[ASD Website](https://www.asd.gov.au/)
