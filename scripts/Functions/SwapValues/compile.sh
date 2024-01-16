#!/bin/bash
COMPILER=g++
FILEDIR=scripts/Functions/SwapValues/
OUTDIR=bin
OUTPUT=swapValues

$COMPILER -c $FILEDIR/Swap.cpp -o $FILEDIR/swap.o
$COMPILER -c $FILEDIR/Main.cpp -o $FILEDIR/main.o

$COMPILER $FILEDIR/swap.o $FILEDIR/main.o -o $OUTDIR/$OUTPUT
rm $FILEDIR/swap.o
rm $FILEDIR/main.o
exit 0
