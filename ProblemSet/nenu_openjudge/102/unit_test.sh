#!/usr/bin/env bash

datafile=data

./chess a1 rook >> $datafile
./chess h1 rook >> $datafile
./chess d5 rook >> $datafile
./chess e5 rook >> $datafile

./chess a1 bishop >> $datafile
./chess h1 bishop >> $datafile
./chess d5 bishop >> $datafile
./chess e5 bishop >> $datafile

./chess a1 queen >> $datafile
./chess h1 queen >> $datafile
./chess d5 queen >> $datafile
./chess e5 queen >> $datafile

./chess a1 king >> $datafile
./chess h1 king >> $datafile
./chess d5 king >> $datafile
./chess e5 king >> $datafile
