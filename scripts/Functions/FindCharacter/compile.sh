#!/bin/bash
COMPILER=g++
FILEDIR=scripts/Functions/FindCharacter/
OUTDIR=bin
OUTPUT=findCharacter

$COMPILER -c $FILEDIR/FindChar.cpp -o $FILEDIR/findChar.o
$COMPILER -c $FILEDIR/Main.cpp -o $FILEDIR/main.o

$COMPILER $FILEDIR/findChar.o $FILEDIR/main.o -o $OUTDIR/$OUTPUT
rm $FILEDIR/findChar.o
rm $FILEDIR/main.o
exit 0