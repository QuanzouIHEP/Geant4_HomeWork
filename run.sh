#!/usr/bin/env bash

cd build
rm HW.root HW.out -rf
./HW HW.in > HW.out
cd ../analysis
root -l analysis.C
