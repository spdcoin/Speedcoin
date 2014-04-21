Speedcoin integration/staging tree
================================

http://www.speedcoin.co

Copyright (c) 2009-2013 Bitcoin Developers
Copyright (c) 2011-2013 Litecoin Developers
Copyright (c) 2014 Speedcoin Developers

What is Speedcoin?
----------------

Speedcoin [SPD] is a lite version of Bitcoin using scrypt-adaptive-N as a proof-of-work algorithm.
 - 1 minute block targets
 - subsidy halves in 2 million blocks (~4 years)
 - 10,105 million total coins
 - 10,000 million premined coins
 - 25 coins per block
 - Every block to retarget difficulty with Kimotos Gravity Well algorithm

The main problem with any cryptocurrency is that it does not spread widely amongst Internet users 
because new crypto coins are mined by not many people (usually a few hundreds only) who well 
understand computers technology and have special equipment so that ordinary Internet users 
cannot mine new coins and must to buy it.

The main idea behind Speedcoin is different. It is to evenly distribute pre-mined Speedcoins 
amongst millions of world internet users (with the user only needing to have a Facebook account) 
through an open clear process.

For more information, as well as an immediately useable, binary version of
the Speedcoin client sofware, see http://www.speedcoin.co.

License
-------

Speedcoin is released under the terms of the MIT license. See `COPYING` for more
information or see http://opensource.org/licenses/MIT.

Development process
-------------------

Developers work in their own trees, then submit pull requests when they think
their feature or bug fix is ready.

If it is a simple/trivial/non-controversial change, then one of the Speedcoin
development team members simply pulls it.

If it is a *more complicated or potentially controversial* change, then the patch
submitter will be asked to start a discussion (if they haven't already) on the
[mailing list](http://sourceforge.net/mailarchive/forum.php?forum_name=bitcoin-development).

The patch will be accepted if there is broad consensus that it is a good thing.
Developers should expect to rework and resubmit patches if the code doesn't
match the project's coding conventions (see `doc/coding.txt`) or are
controversial.

The `master` branch is regularly built and tested, but is not guaranteed to be
completely stable. [Tags](https://github.com/bitcoin/bitcoin/tags) are created
regularly to indicate new official, stable release versions of Speedcoin.

Testing
-------

Testing and code review is the bottleneck for development; we get more pull
requests than we can review and test. Please be patient and help out, and
remember this is a security-critical project where any mistake might cost people
lots of money.

### Automated Testing

Developers are strongly encouraged to write unit tests for new code, and to
submit new unit tests for old code.

Unit tests for the core code are in `src/test/`. To compile and run them:

    cd src; make -f makefile.unix test

Unit tests for the GUI code are in `src/qt/test/`. To compile and run them:

    qmake BITCOIN_QT_TEST=1 -o Makefile.test bitcoin-qt.pro
    make -f Makefile.test
    ./speedcoin-qt_test

