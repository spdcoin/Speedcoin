Copyright (c) 2009-2013 Bitcoin Developers
Distributed under the MIT/X11 software license, see the accompanying
file COPYING or http://www.opensource.org/licenses/mit-license.php.
This product includes software developed by the OpenSSL Project for use in the [OpenSSL Toolkit](http://www.openssl.org/). This product includes
cryptographic software written by Eric Young ([eay@cryptsoft.com](mailto:eay@cryptsoft.com)), and UPnP software written by Thomas Bernard.



Instruction
-------------------
Similar like Bitcoin - https://bitcointalk.org/index.php?topic=149479.0



Dependencies
-------------------
* Boost 1.57
* DB 4.8.30.NC
* Libpng 1.6.16
* MiniUPNPC 1.9
* OpenSSL 1.0.1l
* Protobuf 2.6.1
* QREncode 3.4.4
* QT 5.3.2

Software
---
* MinGW
* mingw32
* Python 3.6
* Perl 6.4



Compile Speedcoin Daemon
-----------------------------
Run C:\MinGW\msys\1.0\msys.bat

MSYS shell:
 
        cd /c/speedcoin/src
        make -f makefile.mingw
        strip speedcoind.exe



Instructions on building Speedcoin-Qt, the
graphical user interface.
------------------------------
Run C:\MinGW\msys\1.0\msys.bat

MSYS shell:

        cd /C/speedcoin/src/leveldb
        TARGET_OS=NATIVE_WINDOWS make libleveldb.a libmemenv.a


Windows Command Line:

        set PATH=%PATH%;C:\Qt\5.3.2\bin
        cd C:\speedcoin\
        qmake "USE_QRCODE=1" "USE_UPNP=1" "USE_IPV6=1" speedcoin-qt.pro
        mingw32-make -f Makefile.Release



Done!


