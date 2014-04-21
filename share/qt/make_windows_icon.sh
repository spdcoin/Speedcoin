#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/speedcoin.png
ICON_DST=../../src/qt/res/icons/speedcoin.ico
convert ${ICON_SRC} -resize 16x16 speedcoin-16.png
convert ${ICON_SRC} -resize 32x32 speedcoin-32.png
convert ${ICON_SRC} -resize 48x48 speedcoin-48.png
convert speedcoin-16.png speedcoin-32.png speedcoin-48.png ${ICON_DST}

