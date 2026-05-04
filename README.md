# xv6 Stack Guard Pages Project

## Description
This project demonstrates a stack overflow in xv6 using a recursive program called `stacktest.c`. The program continuously calls itself, increasing stack usage until it crashes or fails.

## How to Run

1. Open terminal in xv6-public
2. Run:
   make clean
   make qemu

3. Inside xv6, run:
   stacktest

## Expected Output
The program prints increasing recursion levels (Level: X) until stack memory is exhausted.

## Files Added
- stacktest.c

## Purpose
This project shows how stack overflow happens and why operating systems need protections like stack guard pages.
