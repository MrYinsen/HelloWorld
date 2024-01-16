#!/bin/bash
COMPILER=g++
FILEDIR=scripts/Functions/FunctionBasics/
OUTDIR=bin
OUTPUT=functionBasics

$COMPILER -c $FILEDIR/Abs.cpp -o $FILEDIR/abs.o
$COMPILER -c $FILEDIR/CountCalls.cpp -o $FILEDIR/counterCalls.o
$COMPILER -c $FILEDIR/Fact.cpp -o $FILEDIR/fact.o
$COMPILER -c $FILEDIR/main.cpp -o $FILEDIR/main.o

$COMPILER $FILEDIR/abs.o $FILEDIR/counterCalls.o $FILEDIR/fact.o $FILEDIR/main.o -o $OUTDIR/$OUTPUT
rm $FILEDIR/abs.o
rm $FILEDIR/counterCalls.o
rm $FILEDIR/fact.o
rm $FILEDIR/main.o
exit 0