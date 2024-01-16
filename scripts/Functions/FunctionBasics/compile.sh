#!/bin/bash
COMPILER=g++
FILEDIR=scripts/Functions/FunctionBasics/
OUTDIR=bin
OUTPUT=functionBasics

$COMPILER -std=c++11 -c $FILEDIR/Abs.cpp -o $FILEDIR/abs.o
$COMPILER -std=c++11 -c $FILEDIR/CountCalls.cpp -o $FILEDIR/counterCalls.o
$COMPILER -std=c++11 -c $FILEDIR/Fact.cpp -o $FILEDIR/fact.o
$COMPILER -std=c++11 -c $FILEDIR/Sum.cpp -o $FILEDIR/sum.o
$COMPILER -std=c++11 -c $FILEDIR/Main.cpp -o $FILEDIR/main.o

$COMPILER -std=c++11 $FILEDIR/abs.o $FILEDIR/sum.o $FILEDIR/counterCalls.o $FILEDIR/fact.o $FILEDIR/main.o -o $OUTDIR/$OUTPUT
rm $FILEDIR/abs.o
rm $FILEDIR/counterCalls.o
rm $FILEDIR/fact.o
rm $FILEDIR/sum.o
rm $FILEDIR/main.o
exit 0